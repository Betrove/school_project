#include "manageconcessionsview.h"
#include "ui_manageconcessionsview.h"
#include "QMessageBox";
#include "QModelIndex"
ManageConcessionsView::ManageConcessionsView(const ServiceManager& serviceManager) :
    QWidget(NULL),serviceManager(serviceManager),
    ui(new Ui::ManageConcessionsView)
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    LoadConcessions();
}

ManageConcessionsView::~ManageConcessionsView()
{
    delete ui;
}

void ManageConcessionsView::LoadConcessions()
{
   ConcessionRepository repository;

   auto items = repository.getAll();

   this->ui->tableWidget->setRowCount(items.size());

   for (auto r=0; r<items.size(); r++)
   {

     ui->tableWidget->setItem( r, 0, new QTableWidgetItem(QString::number(items[r].getId())));
     ui->tableWidget->setItem( r, 1, new QTableWidgetItem(items[r].getName().c_str()));
     ui->tableWidget->setItem( r, 2, new QTableWidgetItem(QString::number(items[r].getPrice())));

   }



}

// add item
void ManageConcessionsView::on_pushButton_2_clicked()
{
    auto view =new AddConcessionItemFormView(this->serviceManager);
    this->serviceManager.getNavigationService()->Navigate(view);
}

// delete item
void ManageConcessionsView::on_pushButton_clicked()
{




    ConcessionRepository repository;

    QItemSelectionModel* select;
    select = ui->tableWidget->selectionModel();

    if(select->hasSelection())
    {
        int ret = QMessageBox::warning(this, tr("Delete Item"),
                                       tr("Are you sure you want to delete item?"),
                                       QMessageBox::Yes | QMessageBox::No
                                       | QMessageBox::Cancel);

        if(ret ==QMessageBox::Yes)
        {
            auto currentrow = select->currentIndex().row();

            auto value =ui->tableWidget->item(currentrow,0)->text();

            Concession obj;
            obj.setId(atoi(value.toStdString().c_str()));

         repository.deleteObject(obj);

        LoadConcessions();
        }


    }

}

void ManageConcessionsView::on_pushButton_3_clicked()
{



}

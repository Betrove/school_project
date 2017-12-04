#include "editconcessionitemview.h"
#include "ui_editconcessionitemview.h"

EditConcessionItemView::EditConcessionItemView(const ServiceManager& serviceManager,int concessionId) :
    QWidget(NULL),serviceManager(serviceManager),
    ui(new Ui::EditConcessionItemView)
{
    ui->setupUi(this);

    ConcessionRepository repository;

    auto item = repository.retrieve(concessionId);

    currentItem = item;
    this->ui->txtName->setText(item.getName().c_str());
    this->ui->txtPrice->setText(QString::number(item.getPrice()));


}


EditConcessionItemView::~EditConcessionItemView()
{
    delete ui;
}

void EditConcessionItemView::on_pushButton_clicked()
{
    auto view = new ManageConcessionsView(this->serviceManager);
    this->serviceManager.getNavigationService()->Navigate(view);
}

void EditConcessionItemView::on_pushButton_2_clicked()
{
   //currentItem.setItemName(this->ui->txtName->text());

}

#include "addconcessionitemformview.h"
#include "ui_addconcessionitemformview.h"
#include "qmessagebox.h"
AddConcessionItemFormView::AddConcessionItemFormView(const ServiceManager& serviceManager) :
    QWidget(NULL),serviceManager(serviceManager),
    ui(new Ui::AddConcessionItemFormView)
{
    ui->setupUi(this);
}

AddConcessionItemFormView::~AddConcessionItemFormView()
{
    delete ui;
}


void AddConcessionItemFormView::on_pushButton_2_clicked()
{
    Concession instance;
    ConcessionRepository repository;


     double price;
     price =atof(ui->txtPrice->text().toStdString().c_str());



    if(!ui->txtName->text().isEmpty())
    {

        instance.setPrice(price);
        instance.setItemName(ui->txtName->text().toStdString());
        repository.create(instance);

        auto view = new ManageConcessionsView(this->serviceManager);
        this->serviceManager.getNavigationService()->Navigate(view);
    }
    else

    {
        QMessageBox msg;
        msg.setText(tr("Unable to add item"));
        msg.setInformativeText(tr("Unable add item, name  is not set"));
        msg.exec();
    }

}

void AddConcessionItemFormView::on_pushButton_clicked()
{
    auto view = new ManageConcessionsView(this->serviceManager);
    this->serviceManager.getNavigationService()->Navigate(view);
}

#include "accountbarloginwidget.h"
#include "ui_accountbarloginwidget.h"
/*********************************************
* Constructor AccountBarLoginWidget:
*           Class AccountBarLoginWidget
----------------------------------------------
* Sets up the AccountBarLoginWidget object
**********************************************/
AccountBarLoginWidget::AccountBarLoginWidget(QWidget *parent) :
    QWidget(parent),ui(new Ui::AccountBarLoginWidget)
{
    ui->setupUi(this);

    ClickableLabel* label = new ClickableLabel(this);

    label->setText("Login");

    ui->horizontalLayout->addWidget(label);
    label->show();

    connect(label,SIGNAL(clicked()),this,SLOT(loginLabelClicked()));

}
/*********************************************
* ~Destructor AccountBarLoginWidget:
*           Class AccountBarLoginWidget
----------------------------------------------
* Deletes the AccountWidget object
**********************************************/
AccountBarLoginWidget::~AccountBarLoginWidget()
{
    delete ui;
}
/************************************
* Method void loginLabelClicked()
------------------------------------
* Preconditions:
* No parameters required
* Postconditions:
* Event is registerd
-----------------------------------
* Returns nothing; emits a signal
**************************************/
void AccountBarLoginWidget::loginLabelClicked()
{
    emit loginRequested();
}

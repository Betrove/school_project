#include "accountbaruserwidget.h"
#include "ui_accountbaruserwidget.h"
#include "QMessageBox"
/*********************************************
* Constructor AccountBarUserWidget:
*           Class AccountBarUserWidget
----------------------------------------------
* Sets up the AccountBarUserWidget object
**********************************************/
AccountBarUserWidget::AccountBarUserWidget(User user) :
    QWidget(NULL),currentUser(user),
    ui(new Ui::AccountBarUserWidget)
{
    ui->setupUi(this);
    QFont welcomeFont("arial",10);
    QLabel* lblWelcome = new QLabel(this);
    ClickableLabel* lblSettings = new ClickableLabel(this);
    QLabel* lblSeperator = new QLabel(this);
    ClickableLabel* lblLogout = new ClickableLabel(this);

    QString str;
    str.append("Welcome, ");
    str.append(user.getUsername().c_str());

    welcomeFont.setBold(true);
    lblWelcome->setFont(welcomeFont);

    lblWelcome->setText(str);
    lblSettings->setText("Settings");
    lblSeperator->setText("|");
    lblLogout->setText("Logout");

    lblWelcome->setMargin(5);
    ui->horizontalLayout->addWidget(lblWelcome);
    ui->horizontalLayout->addWidget(lblSettings);
    ui->horizontalLayout->addWidget(lblSeperator);
    ui->horizontalLayout->addWidget(lblLogout);

    connect(lblLogout,SIGNAL(clicked()),this,SLOT(logoutLabelClicked()));

}
/*********************************************
* ~Destructor AccountBarUserWidget:
*       Class AccountBarUserWidget
----------------------------------------------
* Deletes the AccountBarUserWidget object
**********************************************/
AccountBarUserWidget::~AccountBarUserWidget()
{
    delete ui;
}
/************************************
* Method void logoutLabelClicked()
------------------------------------
* Preconditions:
* No parameters needed
* Postconditions:
* Emits a signal for the logout to
* be requested
-----------------------------------
* Returns nothing
**************************************/
void AccountBarUserWidget::logoutLabelClicked()
{
    emit logoutRequested();
}

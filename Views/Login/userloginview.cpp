#include "userloginview.h"
#include "ui_userloginview.h"

#include "qmessagebox.h"
UserLoginView::UserLoginView(const ServiceManager &serviceManager):
    QWidget(NULL),ui(new Ui::UserLoginView),serviceManager(serviceManager)
{
    ui->setupUi(this);

    connect(ui->dialogWidget,SIGNAL(tryLogin(UserCredential)),this,SLOT(attemptLogin(UserCredential)));
    connect(this->serviceManager.getLoginService(),SIGNAL(loginFailed(QString)),this,SLOT(onLoginFailed(QString)));

}

UserLoginView::~UserLoginView()
{
    delete ui;
}

void UserLoginView::attemptLogin(UserCredential credential)
{
    this->serviceManager.getLoginService()->attemptLogin(credential);
}

void UserLoginView::onLoginFailed(QString message)
{
    QMessageBox::warning(this, tr("Login Failed"),
                                  tr(message.toStdString().c_str()));
}


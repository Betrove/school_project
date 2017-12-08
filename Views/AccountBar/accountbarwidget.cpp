#include "accountbarwidget.h"
#include "ui_accountbarwidget.h"
#include "Views/Stadium/shortestdistancewidget.h"
#include "QMessageBox"

/*********************************************
* Constructor AccountBarWidget: Class AccountBarWidget
----------------------------------------------
* Sets up the AccountBarWidget object
**********************************************/
AccountBarWidget::AccountBarWidget(const ServiceManager &serviceManager):
    QWidget(NULL),ui(new Ui::AccountBarWidget),serviceManager(serviceManager)
{
    ui->setupUi(this);
    ui->horizontalLayout->setAlignment(Qt::AlignLeft);


    currentLoginStateWidget = new AccountBarLoginWidget(this);
    currentLoginStateWidget->setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred);

    connect(currentLoginStateWidget,SIGNAL(loginRequested()),this,SLOT(onLoginActivated()));

    connect(serviceManager.getLoginService(),SIGNAL(loginSuccesful(User)),this,SLOT(onLoginSuccessful(User)));
    ui->horizontalLayout->addWidget(currentLoginStateWidget);

    connect(serviceManager.getLoginService(),SIGNAL(userLoggedOut()),this,SLOT(onUserLoggedOut()));
}
/*********************************************
* ~Destructor AccountBarWidget: Class AccountBarWidget
----------------------------------------------
* Deletes the AccountBarWidget object
**********************************************/
AccountBarWidget::~AccountBarWidget()
{
    delete ui;
}
/************************************
* Method void onLoginActivated()
------------------------------------
* Preconditions:
* No parameters needed
* Postconditions:
* Opens up the correct view for a login
-----------------------------------
* Returns nothing
**************************************/
void AccountBarWidget::onLoginActivated()
{

    this->serviceManager.getNavigationService()->Navigate(new UserLoginView(this->serviceManager));
}
/************************************
* Method void onLoginSuccessful(User)
------------------------------------
* Preconditions:
* One parameter needed:
*   - user(User) - User trying to login
* Postconditions:
* Opens up the correct view after a login
-----------------------------------
* Returns nothing
**************************************/
void AccountBarWidget::onLoginSuccessful(User user)
{

      ui->horizontalLayout->removeWidget(currentLoginStateWidget);

      delete currentLoginStateWidget;

      currentLoginStateWidget= new AccountBarUserWidget(user);

      connect(this->currentLoginStateWidget,SIGNAL(logoutRequested()),this,SLOT(onLogoutActivated()));

      ui->horizontalLayout->addWidget(currentLoginStateWidget);

      this->serviceManager.getNavigationService()->Navigate(new WelcomeView);


}
/************************************
* Method void onLoginActivated()
------------------------------------
* Preconditions:
* No parameters needed
* Postconditions:
* Opens up the correct view after a login
-----------------------------------
* Returns nothing
**************************************/
void AccountBarWidget::onLogoutActivated()
{
    int ret = QMessageBox::warning(this, tr("User Logout"),
                                   tr("Are you sure you want to logout?"),
                                   QMessageBox::Yes | QMessageBox::No
                                   | QMessageBox::Cancel);
    if(ret == QMessageBox::Yes)
    {
        this->serviceManager.getLoginService()->logout();
    }

}
/************************************
* Method void onUserLoggedOut()
------------------------------------
* Preconditions:
* No parameters needed
* Postconditions:
* Opens up the correct view after a
* logout
-----------------------------------
* Returns nothing
**************************************/
void AccountBarWidget::onUserLoggedOut()
{

    ui->horizontalLayout->removeWidget(currentLoginStateWidget);

    delete currentLoginStateWidget;

    currentLoginStateWidget= new AccountBarLoginWidget(this);
    currentLoginStateWidget->setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Preferred);

    connect(currentLoginStateWidget,SIGNAL(loginRequested()),this,SLOT(onLoginActivated()));
    ui->horizontalLayout->addWidget(currentLoginStateWidget);

    this->serviceManager.getNavigationService()->Navigate(new AppStartUpView);
}

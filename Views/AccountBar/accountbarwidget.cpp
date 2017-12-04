#include "accountbarwidget.h"
#include "ui_accountbarwidget.h"
#include "Views/Stadium/shortestdistancewidget.h"
#include "QMessageBox"
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

AccountBarWidget::~AccountBarWidget()
{
    delete ui;
}

void AccountBarWidget::onLoginActivated()
{

    this->serviceManager.getNavigationService()->Navigate(new UserLoginView(this->serviceManager));
}

void AccountBarWidget::onLoginSuccessful(User user)
{

      ui->horizontalLayout->removeWidget(currentLoginStateWidget);

      delete currentLoginStateWidget;

      currentLoginStateWidget= new AccountBarUserWidget(user);

      connect(this->currentLoginStateWidget,SIGNAL(logoutRequested()),this,SLOT(onLogoutActivated()));

      ui->horizontalLayout->addWidget(currentLoginStateWidget);

      this->serviceManager.getNavigationService()->Navigate(new WelcomeView);


}

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

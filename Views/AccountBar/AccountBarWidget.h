#ifndef ACCOUNTBARWIDGET_H
#define ACCOUNTBARWIDGET_H

#include <QWidget>
#include "Services/servicemanager.h"
#include "Views/Login/userloginview.h"
#include "Views/AccountBar/accountbarloginwidget.h"
#include "Views/AccountBar/accountbaruserwidget.h"
#include "Views/Main/appstartupview.h"
#include "Views/Main/welcomeview.h"
namespace Ui {
class AccountBarWidget;
}

class AccountBarWidget : public QWidget
{
    Q_OBJECT

public:
    AccountBarWidget(const ServiceManager& serviceManager);
    ~AccountBarWidget();
private slots:
    void onLoginActivated();
    void onLoginSuccessful(User user);

    void onLogoutActivated();
    void onUserLoggedOut();



private:
    Ui::AccountBarWidget *ui;
    QWidget* currentLoginStateWidget;
    const ServiceManager& serviceManager;
};

#endif // ACCOUNTBARWIDGET_H

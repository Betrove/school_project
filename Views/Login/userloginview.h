#ifndef USERLOGINVIEW_H
#define USERLOGINVIEW_H

#include <QPainter>
#include "Services/servicemanager.h"
#include "Views/Login/logindialogview.h"
#include <QWidget>
namespace Ui {
class UserLoginView;
}

class UserLoginView : public QWidget
{
    Q_OBJECT

public:
     UserLoginView(const ServiceManager& serviceManager);
    ~UserLoginView();

public slots:

     void attemptLogin(UserCredential credential);
      void onLoginFailed(QString message);


private:
    Ui::UserLoginView *ui;
    const ServiceManager& serviceManager;
};

#endif // USERLOGINVIEW_H

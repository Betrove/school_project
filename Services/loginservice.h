#ifndef LOGINSERVICE_H
#define LOGINSERVICE_H

#include <QObject>
#include "Security/usercredential.h"
#include "Repositories/userrepository.h"
#include "Models/user.h"
class LoginService:public QObject
{
  Q_OBJECT
public:
    LoginService();
    void attemptLogin(UserCredential credential);
    void logout();
    bool LoggedIn() const;
    bool IsAdmin();
    User getCurrentUser();

public slots:


signals:

    void loginSuccesful(User user);
    void loginFailed(QString errorMessage);
    void userLoggedOut();

private:
bool loginActive;
User currentUser;


};

#endif // LOGINSERVICE_H

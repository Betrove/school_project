#ifndef USERCREDENTIAL_H
#define USERCREDENTIAL_H

#include <QString>
class UserCredential
{
public:
    UserCredential(QString username,QString password);
QString getUsername() const;
QString  getPassword() const;
private:
QString username;
QString password;
};

#endif // USERCREDENTIAL_H

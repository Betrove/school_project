#include "usercredential.h"

UserCredential::UserCredential(QString username,QString password):
    username(username),password(password)
{

}

QString UserCredential::getUsername() const
{
     return this->username;
}

QString UserCredential::getPassword() const
{
    return this->password;
}

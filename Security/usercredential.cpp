#include "usercredential.h"

/*********************************************
* Constructor UserCredentials:
*   Class UserCredentials
----------------------------------------------
* Sets up the object
**********************************************/
UserCredential::UserCredential(QString username,QString password):
    username(username),password(password)
{

}
/************************************
* Method QString getUsername()
------------------------------------
* Preconditions:
* No parameters needed
* Postconditions:
* Username is returned
-----------------------------------
* Returns username
**************************************/
QString UserCredential::getUsername() const
{
     return this->username;
}
/************************************
* Method QString getPassword()
------------------------------------
* Preconditions:
* No parameters needed
* Postconditions:
* Password is returned
-----------------------------------
* Returns password
**************************************/
QString UserCredential::getPassword() const
{
    return this->password;
}

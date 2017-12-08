#include "user.h"
/*********************************************
* Constructor User: Class User
----------------------------------------------
* Sets up the user object
**********************************************/
User::User()
{

}

/************************************
* Method void setUsername(string)
------------------------------------
* Preconditions:
* One parameter needed:
*	- username(string) - New username
* Postconditions:
* Username of user is changed
-----------------------------------
* Returns nothing
**************************************/
void User::setUsername(std::string username)
{
    this->username = username;
}
/************************************
* Method void setPassword(string)
------------------------------------
* Preconditions:
* One parameter needed:
*	- password(string) - New password
* Postconditions:
* Password of user is changed
-----------------------------------
* Returns nothing
**************************************/
void User::setPassword(std::string password)
{
    this->password = password;
}
/************************************
* Method void setPermissionLevel(int)
------------------------------------
* Preconditions:
* One parameter needed:
*	- level(in) - New level
* Postconditions:
* Permission of user is changed
-----------------------------------
* Returns nothing
**************************************/
void User::setPermissionLevel(int level)
{
    this->permissionlevel = level;
}
/********************************************
* Method string getUsername()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the username of the user
-------------------------------------------
* Returns username
*******************************************/
std::string User::getUsername()
{
    return this->username;
}
/********************************************
* Method string getUsername()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the password of the user
-------------------------------------------
* Returns password
*******************************************/
std::string User::getPassword()
{
    return this->password;
}
/********************************************
* Method int getUsername()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the permission level of the user
-------------------------------------------
* Returns permissionLevel
*******************************************/
int User::getPermissionLevel()
{
    return this->permissionlevel;
}

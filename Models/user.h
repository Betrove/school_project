#ifndef USER_H
#define USER_H

#include "imodel.h"
#include <string>

/*****************************************
 * ClickableLabel Class
 * ---------------------------------------
 * This class represents a user in the
 * system
 ****************************************/
class User: public IModel
{
public:
    /**************************
     * Constructor/Destructor *
     **************************/
    User();
    /*************
     * Mutator
     ************/
    void setUsername(std::string username);
    void setPassword(std::string password);
    void setPermissionLevel(int level);
    /*******************
     *     Accessors   *
     ******************/
    std::string getUsername();
    std::string getPassword();
    int getPermissionLevel();

private:
std::string username;
std::string password;
int permissionlevel;

};
/******************************
 ** CONSTRUCTOR              **
 ******************************/
/****************************************************************
* User();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void setUsername(string)
*
*   Mutator; sets the username
*------------------------------------------------------------------
*   Parameter: username(sting) - users name
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void setPassword(string)
*
*   Mutator; sets user password
*------------------------------------------------------------------
*   Parameter: password(string) - user password
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/***************
** Accessor  **
***************/
/*******************************************************************
* string getUsername()
*
*   Accessor; returns username
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: username
*******************************************************************/
/*******************************************************************
* string getPassword()
*
*   Accessor; returns password of user
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: password
*******************************************************************/
/*******************************************************************
* string getPermissionLevel()
*
*   Accessor; returns permission level of user
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: permissionLevel
*******************************************************************/
#endif // USER_H

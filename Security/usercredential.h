#ifndef USERCREDENTIAL_H
#define USERCREDENTIAL_H

#include <QString>
/*****************************************
 * UserCredential Class
 * ---------------------------------------
 * This class represents a check for user
 * credentials in the login system
 ****************************************/
class UserCredential
{
public:
    /**************************
     * Constructor/Destructor *
     **************************/
    UserCredential(QString username,QString password);
    /*******************
     *     Accessors   *
     ******************/
QString getUsername() const;
QString  getPassword() const;
private:
QString username;
QString password;
};
/******************************
 ** CONSTRUCTOR              **
 ******************************/
/****************************************************************
* UserCredential();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Accessor  **
***************/
/*******************************************************************
* QString getUsername()
*
*   Accessor; Returns a password of the user
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  QString username
*******************************************************************/
/*******************************************************************
* QString getPassword()
*
*   Accessor; Returns a username of the user
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  QString password
*******************************************************************/
#endif // USERCREDENTIAL_H

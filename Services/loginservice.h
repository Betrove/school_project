#ifndef LOGINSERVICE_H
#define LOGINSERVICE_H

#include <QObject>
#include "Security/usercredential.h"
#include "Repositories/userrepository.h"
#include "Models/user.h"

/*****************************************
 * LoginService Class
 * ---------------------------------------
 * This class represents a Login module
 * which makes sure the services are being
 * monitered correctly
 ****************************************/
class LoginService:public QObject
{
  Q_OBJECT
public:
    /**************************
     * Constructor/Destructor *
     **************************/
    LoginService();
    /*************
     * Mutator
     ************/
    void attemptLogin(UserCredential credential);
    void logout();
    /*******************
     *     Accessors   *
     ******************/
    bool LoggedIn() const;
    bool IsAdmin();
    User getCurrentUser();

public slots:


signals:
    /*************
     * Mutator
     ************/
    void loginSuccesful(User user);
    void loginFailed(QString errorMessage);
    void userLoggedOut();

private:
bool loginActive;
User currentUser;


};
/******************************
 ** CONSTRUCTOR              **
 ******************************/
/****************************************************************
* LoginService();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void loginSuccessful(User)
*
*   Mutator; Changes the view after an attempt of login
*------------------------------------------------------------------
*   Parameter: user(User) - User trying to login
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void logout()
*
*   Mutator; Logs out the user from the widget
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void loginSuccessful(User)
*
*   Mutator; Changes the view of the user if the login is successful
*------------------------------------------------------------------
*   Parameter: user(User) - User successfully logged in
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void loginFailed(User)
*
*   Mutator; Changes the view of the user if the login has failed
*------------------------------------------------------------------
*   Parameter: user(User) - User failed logged in
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/***************
** Accessor  **
***************/
/*******************************************************************
* bool LoggedIn()
*
*   Accessor; Checks if the user is logged in
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  Returns true or false
*******************************************************************/
/*******************************************************************
* bool IsAdmin()
*
*   Accessor; Checks if the user is logged in as an admin
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  Returns true or false
*******************************************************************/
/*******************************************************************
* User getCurrentUser()
*
*   Accessor; Gets the current user in the widget
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  Returns a user
*******************************************************************/
#endif // LOGINSERVICE_H

#include "loginservice.h"

/*********************************************
* Constructor LoginService:
*   Class LoginService
----------------------------------------------
* Sets up the object
**********************************************/
LoginService::LoginService()
{
  this->loginActive = false;
}
/************************************
* Method void attemptLogin(UserCredential)
------------------------------------
* Preconditions:
* One parameter needed:
*	- credential(UserCredential) -
*               User logged in
* Postconditions:
* Checks the attemp for a log in
-----------------------------------
* Returns nothing
**************************************/
void LoginService::attemptLogin(UserCredential credential)
{
     UserRepository repository;

     bool result;

     result = repository.validateCredentials(credential.getUsername(),credential.getPassword());

     if(result)
     {
         auto user =repository.getUserByName(credential.getUsername());
          loginActive = true;
          currentUser = user;
        emit loginSuccesful(user);
     }

     else
     {
         emit loginFailed("Invalid username and/or password.");
     }

}
/************************************
* Method void logout()
------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* Sets if the user is logged in or
* not
-----------------------------------
* Returns nothing
**************************************/
void LoginService::logout()
{
      loginActive = false;
    emit userLoggedOut();
}
/************************************
* Method void loggedIn()
------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* Checks if the user is logged in or
* not
-----------------------------------
* Returns true or false
**************************************/
bool LoginService::LoggedIn() const
{
    return this->loginActive;
}

/************************************
* Method void IsAdmin()
------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* Checks if the user is an admin
-----------------------------------
* Returns nothing
**************************************/
bool LoginService::IsAdmin()
{
    if(this->loginActive)
    {
        if(currentUser.getPermissionLevel() == 1)
        {
           return true;
        }
    }

    return false;
}

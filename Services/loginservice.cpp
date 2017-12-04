#include "loginservice.h"

LoginService::LoginService()
{
  this->loginActive = false;
}

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

void LoginService::logout()
{
      loginActive = false;
    emit userLoggedOut();
}

bool LoginService::LoggedIn() const
{
    return this->loginActive;
}

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

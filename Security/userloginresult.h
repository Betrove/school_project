#ifndef USERLOGINRESULT_H
#define USERLOGINRESULT_H

#include <string>

/*****************************************
 * UserLoginResult Class
 * ---------------------------------------
 * This class represents a user login after
 * password and username have entered
 ****************************************/
class UserLoginResult
{
 public:
    /**************************
     * Constructor/Destructor *
     **************************/
    UserLoginResult(bool haserror = true, std::string message ="Invalid Username and/or Password.");
    /*******************
     *     Accessors   *
     ******************/
    bool hasError();
    std::string getMessage();
 private:
 bool haserror;
 std::string message;
};
/******************************
 ** CONSTRUCTOR              **
 ******************************/
/****************************************************************
* UserLoginResult();
*   Constructor; Initialize class attributes
*   Parameters: haserror(bool)  -   Checks for error
*               message(string) -   String message
*   Return: none
***************************************************************/
UserLoginResult::UserLoginResult(bool haserror, std::string message)
{
   this->haserror = haserror;
   this->message = message;
}
/***************
** Accessor  **
***************/
/*******************************************************************
* bool hasError()
*
*   Accessor; Returns if there is an error
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: True or false
*******************************************************************/
bool UserLoginResult::hasError()
{
   return haserror;
}
/*******************************************************************
* string getMessage()
*
*   Accessor; Returns error messsage
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: True or false
*******************************************************************/
std::string UserLoginResult::getMessage()
{
   return message;
}


#endif // USERLOGINRESULT_H

#ifndef USERLOGINRESULT_H
#define USERLOGINRESULT_H

#include <string>

class UserLoginResult
{
 public:
    UserLoginResult(bool haserror = true, std::string message ="Invalid Username and/or Password.");
    bool hasError();
    std::string getMessage();
 private:
 bool haserror;
 std::string message;
};

UserLoginResult::UserLoginResult(bool haserror, std::string message)
{
   this->haserror = haserror;
   this->message = message;
}

bool UserLoginResult::hasError()
{
   return haserror;
}

std::string UserLoginResult::getMessage()
{
   return message;
}


#endif // USERLOGINRESULT_H

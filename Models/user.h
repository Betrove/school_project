#ifndef USER_H
#define USER_H

#include "imodel.h"
#include <string>

class User: public IModel
{
public:
    User();
    void setUsername(std::string username);
    void setPassword(std::string password);
    void setPermissionLevel(int level);
    std::string getUsername();
    std::string getPassword();
    int getPermissionLevel();

private:
std::string username;
std::string password;
int permissionlevel;

};

#endif // USER_H

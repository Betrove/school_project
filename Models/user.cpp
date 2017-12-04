#include "user.h"

User::User()
{

}

void User::setUsername(std::string username)
{
    this->username = username;
}

void User::setPassword(std::string password)
{
    this->password = password;
}

void User::setPermissionLevel(int level)
{
    this->permissionlevel = level;
}

std::string User::getUsername()
{
    return this->username;
}

std::string User::getPassword()
{
    return this->password;
}

int User::getPermissionLevel()
{
    return this->permissionlevel;
}

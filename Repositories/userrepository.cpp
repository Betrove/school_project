#include "userrepository.h"
UserRepository::UserRepository()
{

}

UserRepository::~UserRepository()
{

}

void UserRepository::create(User user)
{
   QSqlQuery query;
   QString username;
   QString password;

   username = user.getUsername().c_str();
   password = user.getPassword().c_str();

   query.prepare("INSERT INTO app.users (username,password) VALUES(:username,:password)");

   query.bindValue(":username",username);
   query.bindValue(":password",password);

   query.exec();
}

User UserRepository::retrieve(int id)
{

   QString username;
   QString password;
   int permissionlevel;
   User instance;

   QSqlQuery query;
   query.prepare("SELECT id, username,password,permission_level FROM app.users WHERE id =:id;");

   query.bindValue(":id",id);
   query.exec();

   if(query.size() == 1)
    {
      query.next();
      username = query.record().value("username").toString();
      password = query.record().value("password").toString();
      permissionlevel = query.record().value("permission_level").toInt();

      instance.setId(id);
      instance.setUsername(username.toStdString());
      instance.setPassword(password.toStdString());
      instance.setPermissionLevel(permissionlevel);

   }
   else
   {
        throw "No user found with specified id";
   }

  return instance;

}

void UserRepository::update(User user)
{
  QSqlQuery query;
  QString username;
  QString password;

   username = user.getUsername().c_str();
   password = user.getPassword().c_str();



  query.prepare("UPDATE app.users SET username=:username,password=:password,permission_level=:permission WHERE id =:id");

  query.bindValue(":id",user.getId());
  query.bindValue(":username",username);
  query.bindValue(":password",password);
  query.bindValue(":permission",user.getPermissionLevel());

  query.exec();

}

void UserRepository::deleteObject(User object)
{
   QSqlQuery query;
   query.prepare("DELETE FROM app.users WHERE  id=:id");

   query.bindValue(":id",object.getId());

   query.exec();

}

std::vector<User> UserRepository::getAll()
{
    std::vector<User> users;
    QSqlQuery query;
    query.prepare("SELECT * FROM app.users;");

    query.exec();

    while(query.next())
    {
      User user;

      user.setId(query.record().value("id").toInt());
      user.setUsername(query.record().value("username").toString().toStdString());
      user.setPassword(query.record().value("password").toString().toStdString());
      user.setPermissionLevel(query.value("permission_level").toInt());

      users.push_back(user);
    }


    return users;
}

User UserRepository::getUserByName(QString username)
{
    User user;
    int id,permissionlevel;
    QString password;

    QSqlQuery query;

    query.prepare("SELECT * FROM app.users where username=:username");

    query.bindValue(":username",username);

    query.exec();

    if(query.size() == 1)
    {
      query.next();

      id = query.record().value("id").toInt();
      password = query.record().value("password").toString();
      permissionlevel = query.record().value("permission_level").toInt();

      user.setId(id);
      user.setUsername(username.toStdString());
      user.setPassword(password.toStdString());
      user.setPermissionLevel(permissionlevel);
    }
    else

    {
         throw "User Not Found!";
    }

    return user;

}

bool UserRepository::validateCredentials(QString username, QString password)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM app.users WHERE username =:username AND password =:password;");

    query.bindValue(":username",username);
    query.bindValue(":password",password);

    query.exec();

    if(query.size() == 1)
    {
        return true;
    }

    else
    {
        return false;
    }


}

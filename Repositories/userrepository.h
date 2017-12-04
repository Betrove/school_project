#ifndef USERREPOSITORY_H
#define USERREPOSITORY_H

#include "irepository.h"
#include "Models/user.h"
#include "vector"
#include <QString>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QVariant>
class UserRepository:public IRepository<User>
{
public:
    UserRepository();
   ~UserRepository() override;

    void create(User user) override;
    User retrieve(int id) override;
    void update(User user) override;
    void deleteObject(User object) override;
    std::vector<User> getAll() override;

    User getUserByName(QString username);
    bool validateCredentials(QString username,QString password);

private:

};






#endif // USERREPOSITORY_H

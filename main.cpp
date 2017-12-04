#include "Views/Main/mainwindow.h"
#include <QApplication>
#include <iostream>
#include "Models/user.h"
#include <QSqlDatabase>
#include "db_config.h"
#include <QDebug>
#include <Repositories/userrepository.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //connect to the postgres db
    QSqlDatabase db = QSqlDatabase::addDatabase(DB_TYPE);
    db.setHostName(DB_HOST);
    db.setDatabaseName(DB_SCHEMA);
    db.setUserName(DB_USERNAME);
    db.setPassword(DB_PASSWD);
    db.setPort(DB_PORT);

    bool ok = db.open();

    MainWindow w;
    w.show();

    if(ok)
    {
        w.show();
    }
    else
    {
      qDebug()<< "failed to open db, check your connection settings";
    }


    return a.exec();


}







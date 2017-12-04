#-------------------------------------------------
#
# Project created by QtCreator 2017-11-11T11:49:31
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Baseball_Project_App
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    Models/concession.cpp \
    Models/imodel.cpp \
    Models/user.cpp \
    Repositories/concessionrepository.cpp \
    Repositories/userrepository.cpp \
    Security/usercredential.cpp \
    Services/loginservice.cpp \
    Services/navigationservice.cpp \
    Services/servicemanager.cpp \
    Models/concession.cpp \
    Models/imodel.cpp \
    Models/user.cpp \
    Repositories/concessionrepository.cpp \
    Repositories/userrepository.cpp \
    Security/usercredential.cpp \
    Services/loginservice.cpp \
    Services/navigationservice.cpp \
    Services/servicemanager.cpp \
    Views/Content/contentviewwidget.cpp \
    Views/Login/logindialogview.cpp \
    Views/Login/userloginview.cpp \
    Views/Main/appstartupview.cpp \
    Views/Main/mainwindow.cpp \
    Views/MenuBar/menubarwidget.cpp \
    Views/Stadium/shortestdistancewidget.cpp \
    main.cpp \
    Views/AccountBar/accountbarwidget.cpp \
    Views/AccountBar/accountbarloginwidget.cpp \
    Views/AccountBar/accountbaruserwidget.cpp \
    Extensions/clickablelabel.cpp \
    Views/Main/welcomeview.cpp \
    Views/Concessions/manageconcessionsview.cpp \
    Views/Concessions/addconcessionitemformview.cpp \
    stadiumlistwidget.cpp \
    Views/Concessions/editconcessionitemview.cpp \
    Models/stadium.cpp \
    Repositories/stadiumrepository.cpp


HEADERS += \
    Models/concession.h \
    Models/imodel.h \
    Models/user.h \
    Repositories/concessionrepository.h \
    Repositories/irepository.h \
    Repositories/userrepository.h \
    Services/loginservice.h \
    Services/navigationservice.h \
    Services/servicemanager.h \
    Models/concession.h \
    Models/imodel.h \
    Models/user.h \
    Repositories/concessionrepository.h \
    Repositories/irepository.h \
    Repositories/userrepository.h \
    Security/usercredential.h \
    Security/userloginresult.h \
    Services/loginservice.h \
    Services/navigationservice.h \
    Services/servicemanager.h \
    Views/Content/contentviewwidget.h \
    Views/Login/logindialogview.h \
    Views/Login/userloginview.h \
    Views/Main/appstartupview.h \
    Views/Main/mainwindow.h \
    Views/MenuBar/menubarwidget.h \
    Views/Stadium/shortestdistancewidget.h \
    db_config.h \
    Views/AccountBar/accountbarwidget.h \
    Views/AccountBar/accountbarloginwidget.h \
    Views/AccountBar/accountbaruserwidget.h \
    Extensions/clickablelabel.h \
    Views/Main/welcomeview.h \
    Views/Concessions/manageconcessionsview.h \
    Views/Concessions/addconcessionitemformview.h \
    stadiumlistwidget.h \
    Views/Concessions/editconcessionitemview.h \
    Models/stadium.h \
    Repositories/stadiumrepository.h



FORMS += \
    Views/Content/contentviewwidget.ui \
    Views/Login/logindialogview.ui \
    Views/Login/userloginview.ui \
    Views/Main/appstartupview.ui \
    Views/Main/mainwindow.ui \
    Views/MenuBar/menubarwidget.ui \
    Views/Stadium/shortestdistancewidget.ui \
    Views/AccountBar/accountbarwidget.ui \
    Views/AccountBar/accountbarloginwidget.ui \
    Views/AccountBar/accountbaruserwidget.ui \
    Views/Main/welcomeview.ui \
    Views/Concessions/manageconcessionsview.ui \
    Views/Concessions/addconcessionitemformview.ui \
    Views/Stadium/stadiumlistwidget.ui \
    Views/Concessions/editconcessionitemview.ui


RESOURCES += \


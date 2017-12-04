#ifndef SERVICEMANAGER_H
#define SERVICEMANAGER_H


#include "navigationservice.h"
#include "loginservice.h"
#include "qexception.h"

class ServiceManager
{
public:
    ServiceManager();
    ~ServiceManager();
 NavigationService* getNavigationService() const;
 LoginService* getLoginService() const;
private:
NavigationService* navigationService;
LoginService* loginService;
};

#endif // SERVICEMANAGER_H

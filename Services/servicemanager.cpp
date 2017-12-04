#include "servicemanager.h"



ServiceManager::ServiceManager():
navigationService(new NavigationService()),loginService(new LoginService())
{

}

ServiceManager::~ServiceManager()
{
    delete navigationService;
    delete loginService;
}

 NavigationService* ServiceManager::getNavigationService() const
{
   return this->navigationService;
}

LoginService* ServiceManager::getLoginService() const
{
    return this->loginService;
}

#include "servicemanager.h"


/*********************************************
* Constructor ServiceManager:
*   Class ServiceManager
----------------------------------------------
* Sets up the object
**********************************************/
ServiceManager::ServiceManager():
navigationService(new NavigationService()),loginService(new LoginService())
{

}
/*********************************************
* Destructor ~ServiceManager:
*   Class ServiceManager
----------------------------------------------
* Deletes all the pointers used in the service
* manager
**********************************************/
ServiceManager::~ServiceManager()
{
    delete navigationService;
    delete loginService;
}
/************************************
* Method NavigationService*
* getNavigationService()
------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* Service manager is returned
-----------------------------------
* Returns navigationService
**************************************/
 NavigationService* ServiceManager::getNavigationService() const
{
   return this->navigationService;
}
 /************************************
 * Method LoginService*
 * getLoginService()
 ------------------------------------
 * Preconditions:
 * No parameter needed
 * Postconditions:
 * Login service manager is returned
 -----------------------------------
 * Returns loginService
 **************************************/
LoginService* ServiceManager::getLoginService() const
{
    return this->loginService;
}

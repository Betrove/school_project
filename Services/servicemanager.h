#ifndef SERVICEMANAGER_H
#define SERVICEMANAGER_H


#include "navigationservice.h"
#include "loginservice.h"
#include "qexception.h"
/*****************************************
 * ServiceManage Class
 * ---------------------------------------
 * This class represents a service manager
 * to keep track of all widgets
 ****************************************/
class ServiceManager
{
public:
    /**************************
     * Constructor/Destructor *
     **************************/
    ServiceManager();
    ~ServiceManager();
    /*******************
     *     Accessors   *
     ******************/
 NavigationService* getNavigationService() const;
 LoginService* getLoginService() const;
private:
NavigationService* navigationService;
LoginService* loginService;
};
/******************************
 ** CONSTRUCTOR & DESTRUCTOR **
 ******************************/
/****************************************************************
* NavigationService();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/****************************************************************
* ~NavigationService();
*   Destructor; Delete class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Accessor  **
***************/
/*******************************************************************
* NavigationService* geNavigationService()
*
*   Accessor; Returns a pointer to the current service used
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  NavigationService*
*******************************************************************/
/*******************************************************************
*   LoginService getLoginService(int)
*
*   Accessor; Returns a pointer to the login service being used
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return:  LoginServie*
*******************************************************************/
#endif // SERVICEMANAGER_H

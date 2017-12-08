#include "navigationservice.h"
#include "qexception.h"

/*********************************************
* Constructor NavigationService:
*   Class NavigationService
----------------------------------------------
* Sets up the navigation service object
**********************************************/
NavigationService::NavigationService()
{

}
/************************************
* Method void Navigate(QWidget*)
------------------------------------
* Preconditions:
* One parameter needed:
*	- view(QWidget*) - View being used
* Postconditions:
* Item is added to repository
-----------------------------------
* Returns nothing
**************************************/
void NavigationService::Navigate(QWidget *view)
{
    if(view !=NULL)
    {
      emit onViewChanged(view);
    }
    else
    {
     // throw QException(" view is null!");
    }
}



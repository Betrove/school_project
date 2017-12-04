#include "navigationservice.h"
#include "qexception.h"
NavigationService::NavigationService()
{

}

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



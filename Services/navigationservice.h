#ifndef NAVIGATIONSERVICE_H
#define NAVIGATIONSERVICE_H

#include <QObject>
/*****************************************
 * NavigationService Class
 * ---------------------------------------
 * This class represents a service which
 * Holds the navigation of the widgets
 ****************************************/
class NavigationService: public QObject
{
 Q_OBJECT
public:
    /**************************
     * Constructor/Destructor *
     **************************/
    NavigationService();
    /*******************
     *     Accessors   *
     ******************/
    void Navigate(QWidget * view);
public slots:


signals:
void onViewChanged(QWidget* view);


private:
};
/******************************
 ** CONSTRUCTOR              **
 ******************************/
/****************************************************************
* NavigationService();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Accessor  **
***************/
/*******************************************************************
* void Navigate(QWidget*)
*
*   Accessor; Helps the navigation of the game
*------------------------------------------------------------------
*   Parameter: view(QWidget*) - Widget to control use view
*------------------------------------------------------------------
*   Return:  none
*******************************************************************/
/*******************************************************************
* void onViewChanged(QWidget*)
*
*   Accessor; Helps the navigation of the game
*------------------------------------------------------------------
*   Parameter: view(QWidget*) - Widget to control use view
*------------------------------------------------------------------
*   Return:  none
*******************************************************************/
#endif // NAVIGATIONSERVICE_H

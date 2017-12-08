#ifndef ACCOUNTBARWIDGET_H
#define ACCOUNTBARWIDGET_H

#include <QWidget>
#include "Services/servicemanager.h"
#include "Views/Login/userloginview.h"
#include "Views/AccountBar/accountbarloginwidget.h"
#include "Views/AccountBar/accountbaruserwidget.h"
#include "Views/Main/appstartupview.h"
#include "Views/Main/welcomeview.h"
namespace Ui {
class AccountBarWidget;
}
/*****************************************
 * AccountBarWidget Class
 * ---------------------------------------
 * This class represents the account widget
 * to monitor the events pressed on screen
 * in the bar widget
 ****************************************/
class AccountBarWidget : public QWidget
{
    Q_OBJECT

public:
    /**************************
     * Constructor/Destructor *
     **************************/
    AccountBarWidget(const ServiceManager& serviceManager);
    ~AccountBarWidget();

    /*************
     * Mutator
     ************/
private slots:
    void onLoginActivated();
    void onLoginSuccessful(User user);

    void onLogoutActivated();
    void onUserLoggedOut();



private:
    Ui::AccountBarWidget *ui;
    QWidget* currentLoginStateWidget;
    const ServiceManager& serviceManager;
};
/******************************
 **     CONSTRUCTOR          **
 ******************************/
/****************************************************************
* AcccountBarWidget();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/****************************************************************
* ~AcccountBarWidget();
*   Destructor; Deletes class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void onLoginActivated()
*
*   Mutator; activates once the user is logged into the program
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void onLoginSuccessful()
*
*   Mutator; activates once the user is logged into the program. If
*   they are successful then the program changes the widget type
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void onLogoutActivated()
*
*   Mutator; activates once the user is logs out of the program. If
*   they are successful then the program changes the screen type
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void onUserLogout()
*
*   Mutator; activates once the user is logs out of the program. If
*   they are successful then the program changes the screen type
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
#endif // ACCOUNTBARWIDGET_H

#ifndef ACCOUNTBARUSERWIDGET_H
#define ACCOUNTBARUSERWIDGET_H

#include <QWidget>
#include "Models/user.h"
#include "Extensions/clickablelabel.h"
namespace Ui {
class AccountBarUserWidget;
}
/*****************************************
 * AccountBarUserWidget Class
 * ---------------------------------------
 * This class represents the account widget
 * to monitor the events pressed on screen
 * of the users widget
 ****************************************/
class AccountBarUserWidget : public QWidget
{
    Q_OBJECT

public:
    /**************************
     * Constructor/Destructor *
     **************************/
    explicit AccountBarUserWidget(User user);
    ~AccountBarUserWidget();
    /*************
     * Mutator
     ************/
private slots:
    void logoutLabelClicked();

signals:
    void logoutRequested();

private:
    Ui::AccountBarUserWidget *ui;
    User currentUser;
};
/******************************
 ** CONSTRUCTOR & DESTRUCTOR **
 ******************************/
/****************************************************************
* AccountBarUsersWidget(User);
*   Constructor; Initialize class attributes
*   Parameters: user(User) - User logged in
*   Return: none
***************************************************************/
/****************************************************************
* ~AccountBarUsersWidget();
*   Destructor; Delets class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void logoutLabelClicked()
*
*   Mutator; Logout widget is clicked and the a signal is emitted
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void logoutRequested()
*
*   Mutator; Logout widget is checked and the user is correctly
*            logged out
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
#endif // ACCOUNTBARUSERWIDGET_H

#ifndef ACCOUNTWIDGET_H
#define ACCOUNTWIDGET_H

#include "models/user.h"
#include <QWidget>

namespace Ui {
class AccountWidget;
}

/*****************************************
 * AccountWidget Class
 * ---------------------------------------
 * This class represents the account widget
 * to monitor the events pressed on screen
 ****************************************/
class AccountWidget : public QWidget
{
    Q_OBJECT

public:
    /**************************
     * Constructor/Destructor *
     **************************/
     AccountWidget(User user);
    ~AccountWidget();

     /*************
      * Mutator
      ************/
private slots:
  void mousePressEvent(QMouseEvent *event);
  bool event(QEvent* e) override;

signals:
  void clicked();
  void hover();

private:
    Ui::AccountWidget *ui;
    User currentUser;
};
/******************************
 **     CONSTRUCTOR          **
 ******************************/
/****************************************************************
* AcccountWidget();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/****************************************************************
* ~AcccountWidget();
*   Destructor; Deletes class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void mousePressEvent(QMouseEvent)
*
*   Mutator; checks for mouse events
*------------------------------------------------------------------
*   Parameter: event(QMouseEvent)    -   Mouse Event
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void event(QEvent)
*
*   Mutator; checks for any events
*------------------------------------------------------------------
*   Parameter: event(QEvent)    -   Widget event
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void clicked()
*
*   Mutator; checks for clicking in the widget
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void hover()
*
*   Mutator; checks for hovering in the widget
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
#endif // ACCOUNTWIDGET_H

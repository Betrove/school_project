#ifndef ACCOUNTBARLOGINWIDGET_H
#define ACCOUNTBARLOGINWIDGET_H

#include <QWidget>
#include "Extensions/clickablelabel.h"
#include "Services/servicemanager.h"
/*****************************************
 * AccountBarLoginWidget Class
 * ---------------------------------------
 * This class represents the account bar
 * widget.
 ****************************************/
namespace Ui {
class AccountBarLoginWidget;
}

class AccountBarLoginWidget : public QWidget
{
    Q_OBJECT

public:
    /**************************
     * Constructor/Destructor *
     **************************/
    explicit AccountBarLoginWidget(QWidget *parent = 0);
    ~AccountBarLoginWidget();

private slots:
    /*************
     * Mutator
     ************/
    void loginLabelClicked();

signals:
    void loginRequested();

private:
    Ui::AccountBarLoginWidget *ui;
};
/******************************
 ** CONSTRUCTOR & DESTRUCTOR **
 ******************************/
/****************************************************************
* AccountBarLoginWidget();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/****************************************************************
* ~AccountBarLoginWidget();
*   Destructor; Deletes all output
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void loginLabelClicked()
*
*   Mutator; Login label is clicked
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void loginRequested()
*
*   Mutator; Login is requested and a signal is emitted
*------------------------------------------------------------------
*   Parameter: none
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
#endif // ACCOUNTBARLOGINWIDGET_H

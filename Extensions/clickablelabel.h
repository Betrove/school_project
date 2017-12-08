#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>
#include <QWidget>
#include <QEvent>
#include <Qt>

/*****************************************
 * ClickableLabel Class
 * ---------------------------------------
 * This class represents all mouse events
 * caused by clicking a label. If it is
 * hovered over the label will change other
 * wise the label will not. If clicked a
 * signal will be sent.
 ****************************************/
class ClickableLabel : public QLabel {
    Q_OBJECT

public:
    /**************************
     * Constructor/Destructor *
     **************************/
    explicit ClickableLabel(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~ClickableLabel();


    /*******************
     *     Accessors   *
     ******************/
    bool event(QEvent *e);

    /*************
     * Mutator
     ************/
signals:
    void clicked();
    void hover();

protected:

    void mousePressEvent(QMouseEvent* event);


};
/******************************
 ** CONSTRUCTOR & DESTRUCTOR **
 ******************************/
/****************************************************************
* ClickableLabel();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/****************************************************************
* ~ClickableLabel();
*   Destructor; Deletes object
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Accessor  **
***************/
/*******************************************************************
* bool event(QEvent)
*
*   Accessor; Checks if an event has been triggered in the GUI
*------------------------------------------------------------------
*   Parameter: QEvent
*------------------------------------------------------------------
*   Return: True or false
*******************************************************************/

/***************
** Mutators  **
***************/
/*******************************************************************
* void clicked()
*
*   Mutator; Checks if an object has been clicked
*------------------------------------------------------------------
*   Parameter: None
*------------------------------------------------------------------
*   Return: Nothing; sends signal if clicked
*******************************************************************/
/*******************************************************************
* void hover()
*
*   Mutator; Checks if an object has been hovered over and changes
*            the color
*------------------------------------------------------------------
*   Parameter: None
*------------------------------------------------------------------
*   Return: Nothing; sends signal if hovered
*******************************************************************/
/*******************************************************************
* void mouseClickEvents()
*
*   Mutator; Checks for any and all mouse click events
*------------------------------------------------------------------
*   Parameter: None
*------------------------------------------------------------------
*   Return: Nothing; checks for mouse click events
*******************************************************************/
#endif // CLICKABLELABEL_H

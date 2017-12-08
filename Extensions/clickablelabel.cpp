#include "clickablelabel.h"

/************************************
* ClickableLabel
------------------------------------
* Sets up the label UI
************************************/
ClickableLabel::ClickableLabel(QWidget* parent, Qt::WindowFlags f)
    : QLabel(parent)
{

}
/************************************
* ~ClickableLabel
------------------------------------
* Preconditions:
* No variables needed
* Postconditions:
* Object deleted
-----------------------------------
* Object is deleted an no returns made
**************************************/
ClickableLabel::~ClickableLabel() {}

/************************************
* bool event(QEvent)
------------------------------------
* Preconditions:
* One parameter needed:
*	- e(QEvent*) - Event occuring
				in the UI
* Postconditions:
* Returns true or false depending on
* event
-----------------------------------
* Returns true or false
**************************************/
bool ClickableLabel::event(QEvent *e)
{
    if (e->type() == QEvent::Enter)
     {
         this->setStyleSheet("QLabel { color: white; text-decoration: underline; }");
     }

     if (e->type()==QEvent::Leave)
     {
        this->setStyleSheet("QLabel { color: white; text-decoration: none;}");
     }

     return QWidget::event(e);
}

/************************************
* void mousePressEvent(QMouseEvent)
------------------------------------
* Preconditions:
* One parameter needed:
*	- e(QMouseEvent*) - Event occuring
in the UI due to mouse
* Postconditions:
* No returns but signal emitted
-----------------------------------
* Returns no returns
**************************************/
void ClickableLabel::mousePressEvent(QMouseEvent* event) {
    emit clicked();
}

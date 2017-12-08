#include "accountwidget.h"
#include "ui_accountwidget.h"

/*********************************************
* Constructor AccountWidget: Class AccountWidget
----------------------------------------------
* Sets up the AccountWidget object
**********************************************/
AccountWidget::AccountWidget(User user) :
    QWidget(NULL),ui(new Ui::AccountWidget),currentUser(user)
{
    ui->setupUi(this);

    QString displayMessage;

    displayMessage += "Welcome, ";
    displayMessage +=currentUser.getUsername().c_str();
    ui->nameLabel->setText(displayMessage);
}
/*********************************************
* ~Destructor AccountWidget: Class AccountWidget
----------------------------------------------
* Deletes the AccountWidget object
**********************************************/
AccountWidget::~AccountWidget()
{
    delete ui;
}
/************************************
* Method void mousePressEvent(QMouseEvent)
------------------------------------
* Preconditions:
* One parameter needed:
*	- event(QMouseEvent) - new mouse event
* Postconditions:
* Mouse Event is registerd
-----------------------------------
* Returns nothing
**************************************/
void AccountWidget::mousePressEvent(QMouseEvent *event)
{

}
/************************************
* Method void event(QEvent)
------------------------------------
* Preconditions:
* One parameter needed:
*	- event(QEvent) - new event
* Postconditions:
* Event is registerd
-----------------------------------
* Returns nothing
**************************************/
bool AccountWidget::event(QEvent *e)
{
   if (e->type() == QEvent::Enter)
  {
      //this->ui->label->setStyleSheet("QLabel { color: white; text-decoration: underline; }");
  }

  if (e->type()==QEvent::Leave)
  {
     //this->ui->label->setStyleSheet("QLabel { color: white; text-decoration: none;}");
  }

  return QWidget::event(e);
}

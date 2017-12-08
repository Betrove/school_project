#include "loginstate_loggedin.h"
#include "ui_loginwidget.h"
#include "qmessagebox.h"

/*********************************************
* Constructor LoginWidget: Class LoginWidget
----------------------------------------------
* Sets up the LoginWidget class
**********************************************/
LoginWidget::LoginWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWidget)
{
    ui->setupUi(this);
}
/*********************************************
* Destructor LoginWidget: Class LoginWidget
----------------------------------------------
* Deletes the login widget
**********************************************/
LoginWidget::~LoginWidget()
{
    delete ui;
}
/************************************
* Method void mousePressEvent(QMouseEvent)
------------------------------------
* Preconditions:
* One parameter needed:
*	- event(QMouseEvent*) - Mouse event
* Postconditions:
* Signal emitted
-----------------------------------
* Returns nothing; emits signal
**************************************/
void LoginWidget::mousePressEvent(QMouseEvent *event)
{
    emit clicked();
}
/************************************
* Method void event(QMouseEvent)
------------------------------------
* Preconditions:
* One parameter needed:
*	- e(Event*) - Event type
* Postconditions:
* Signal emitted
-----------------------------------
* Returns nothing; emits signal
**************************************/
bool LoginWidget::event(QEvent *e)
{

  if (e->type() == QEvent::Enter)
  {
      this->ui->label->setStyleSheet("QLabel { color: white; text-decoration: underline; }");
  }

  if (e->type()==QEvent::Leave)
  {
     this->ui->label->setStyleSheet("QLabel { color: white; text-decoration: none;}");
  }

  return QWidget::event(e);
}



#include "accountwidget.h"
#include "ui_accountwidget.h"

AccountWidget::AccountWidget(User user) :
    QWidget(NULL),ui(new Ui::AccountWidget),currentUser(user)
{
    ui->setupUi(this);

    QString displayMessage;

    displayMessage += "Welcome, ";
    displayMessage +=currentUser.getUsername().c_str();
    ui->nameLabel->setText(displayMessage);
}

AccountWidget::~AccountWidget()
{
    delete ui;
}

void AccountWidget::mousePressEvent(QMouseEvent *event)
{

}

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

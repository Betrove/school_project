#include "loginstate_loggedin.h"
#include "ui_loginwidget.h"
#include "qmessagebox.h"


LoginWidget::LoginWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWidget)
{
    ui->setupUi(this);
}



LoginWidget::~LoginWidget()
{
    delete ui;
}

void LoginWidget::mousePressEvent(QMouseEvent *event)
{
    emit clicked();
}

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



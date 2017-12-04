#include "accountbarloginwidget.h"
#include "ui_accountbarloginwidget.h"

AccountBarLoginWidget::AccountBarLoginWidget(QWidget *parent) :
    QWidget(parent),ui(new Ui::AccountBarLoginWidget)
{
    ui->setupUi(this);

    ClickableLabel* label = new ClickableLabel(this);

    label->setText("Login");

    ui->horizontalLayout->addWidget(label);
    label->show();

    connect(label,SIGNAL(clicked()),this,SLOT(loginLabelClicked()));

}

AccountBarLoginWidget::~AccountBarLoginWidget()
{
    delete ui;
}

void AccountBarLoginWidget::loginLabelClicked()
{
    emit loginRequested();
}

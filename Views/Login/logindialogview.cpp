#include "logindialogview.h"
#include "ui_logindialogview.h"
#include "qmessagebox.h"
LoginDialogView::LoginDialogView(QWidget* parent) :
    QWidget(parent),ui(new Ui::LoginDialogView)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(onLoginButtonClicked(bool)));
}

LoginDialogView::~LoginDialogView()
{
    delete ui;
}

void LoginDialogView::paintEvent(QPaintEvent *event)
{

    QPainter p(this);
    QColor fillColor("#3C3C3C");
    QBrush fillBrush(fillColor);
    QColor penColor("#3C3C3C");
    QBrush penBrush(penColor);
    p.setRenderHint(QPainter::Antialiasing);
    QPainterPath path;

    path.addRoundedRect(QRectF(0, 0,this->width(),this->height()),10,10);
    QPen pen(penColor, 3);
    p.setPen(pen);
    p.fillPath(path,fillBrush);
    p.drawPath(path);

}



void LoginDialogView::onLoginButtonClicked(bool value)
{

    auto credential = UserCredential(ui->txtUser->text(),ui->txtPass->text());
    emit tryLogin(credential);
}



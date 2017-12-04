#include "appstartupview.h"
#include "ui_appstartupview.h"
AppStartUpView::AppStartUpView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AppStartUpView)
{
    ui->setupUi(this);

    QImage image;

    image.load("C:/Users/anton/Desktop/Baseball_Project_App/Images/baseball.png");
    ui->label->setPixmap(QPixmap::fromImage(image));

}

AppStartUpView::~AppStartUpView()
{
    delete ui;
}

void AppStartUpView::paintEvent(QPaintEvent *event)
{

}

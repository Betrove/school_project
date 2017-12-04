#include "welcomeview.h"
#include "ui_welcomeview.h"

WelcomeView::WelcomeView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WelcomeView)
{
    ui->setupUi(this);

    QImage image;

    image.load("C:/Users/anton/Desktop/Baseball_Project_App/Images/baseball-field.png");
    ui->lblImage->setPixmap(QPixmap::fromImage(image));
}

WelcomeView::~WelcomeView()
{
    delete ui;
}

#include "shortestdistancewidget.h"
#include "ui_shortestdistancewidget.h"
#include <iostream>

ShortestDistanceWidget::ShortestDistanceWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShortestDistanceWidget)
{
    ui->setupUi(this);

    ui->verticalLayout_5->setAlignment(Qt::AlignLeft);
    ui->verticalLayout_6->setAlignment(Qt::AlignLeft);


}

ShortestDistanceWidget::~ShortestDistanceWidget()
{
    delete ui;
}

void ShortestDistanceWidget::on_pushButton_clicked()
{

}

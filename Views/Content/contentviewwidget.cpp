#include "contentviewwidget.h"
#include "ui_contentviewwidget.h"
#include "QMessageBox"
ContentViewWidget::ContentViewWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContentViewWidget)
{
    ui->setupUi(this);
}

ContentViewWidget::~ContentViewWidget()
{
    delete ui;
}

void ContentViewWidget::onViewChangeEvent(QWidget *widget)
{
    if(ui->ContentWidget !=NULL)
   {
      delete ui->ContentWidget;
   }

   if( widget !=NULL)
   {
    this->ui->ContentWidget = widget;
     widget->setParent(this);
     widget->show();
     this->ui->verticalLayout->addWidget(widget);

   }
}


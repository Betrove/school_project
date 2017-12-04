#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>
#include "qmessagebox.h"

MainWindow::MainWindow(QWidget* parent)
:QMainWindow(parent),ui(new Ui::MainWindow),serviceManager(new ServiceManager())
{
   ui->setupUi(this);
   setUpGui();
}

MainWindow::~MainWindow()
{
   delete serviceManager;
   delete ui;
}

void MainWindow::setUpGui()
{
    QVBoxLayout* layout = new QVBoxLayout;
    layout->setSpacing(0);
    layout->setMargin(0);

    ui->centralWidget->setLayout(layout);

    AccountBarWidget* accountbarwidget = new AccountBarWidget(*this->serviceManager);
    MenuBarWidget* menubarwidget = new MenuBarWidget(*this->serviceManager);
    ContentViewWidget* contentwidget = new ContentViewWidget;

    accountbarwidget->setMinimumHeight(75);
    menubarwidget->setMinimumHeight(50);
    contentwidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    layout->addWidget(accountbarwidget);
    layout->addWidget(menubarwidget);
    layout->addWidget(contentwidget);

    connect(this->serviceManager->getNavigationService(),SIGNAL(onViewChanged(QWidget*)),contentwidget,SLOT(onViewChangeEvent(QWidget*)));

    this->serviceManager->getNavigationService()->Navigate(new AppStartUpView);
}


void MainWindow::on_pushButton_clicked()
{

}

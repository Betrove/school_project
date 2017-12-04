#include "menubarwidget.h"
#include "ui_menubarwidget.h"
#include "qmessagebox.h"
#include "qwidgetaction.h"
#include "qlabel.h"


MenuBarWidget::MenuBarWidget(const ServiceManager& serviceManager) :
    QWidget(NULL),ui(new Ui::MenuBarWidget),serviceManager(serviceManager)
{
    ui->setupUi(this);
    ui->horizontalLayout->setAlignment(Qt::AlignLeft);

    initializeMenu();
}

MenuBarWidget::~MenuBarWidget()
{
    delete ui;
}




void MenuBarWidget::initializeMenu()
{
   QFont parentMenuFont;
   QColor parentMenuForegroundColor;
   QColor parentMenuBackgroundColor;
   QFont dropDownMenuFont;
   QColor dropDownMenuForegroundColor;
   QColor dropDownMenuBackgroundColor;



   QMenu* stadiumMenu;
   QMenu* shortest_path_Menu;
   QMenu* search_Menu;
   QAction* stadiumlist_action;


   QMenu* adminMenu;
   QMenu* concessionMenu;



   QWidgetAction* shortestMajor_action;
   QWidgetAction* shortestAmerican_action;
   QWidgetAction* shortestNational_action;
   QWidgetAction* distbetweenstad_action;
   QWidgetAction* manageConcession_Action;
   QWidgetAction* addConcession_Action;



   QLabel* lblMajor;
   QLabel* lblAmerican;
   QLabel* lblNational;
   QLabel* lblManageConcessions;
   QLabel* lblAddConcessions;

   QLabel* lbldiststad;

   shortestMajor_action = new QWidgetAction(this);
   shortestAmerican_action = new QWidgetAction(this);
   shortestNational_action = new QWidgetAction(this);
   distbetweenstad_action = new QWidgetAction(this);
   manageConcession_Action = new QWidgetAction(this);
   addConcession_Action = new QWidgetAction(this);


   lblMajor = new QLabel(this);
   lblAmerican = new QLabel(this);
   lblNational = new QLabel(this);
   lbldiststad = new QLabel(this);
   lblManageConcessions = new QLabel(this);
   lblAddConcessions = new QLabel(this);

   shortestMajor_action->setDefaultWidget(lblMajor);
   shortestAmerican_action->setDefaultWidget(lblAmerican);
   shortestNational_action->setDefaultWidget(lblNational);
   distbetweenstad_action->setDefaultWidget(lbldiststad);
   manageConcession_Action->setDefaultWidget(lblManageConcessions);
   addConcession_Action->setDefaultWidget(lblAddConcessions);

   parentMenuFont = QFont("Arial",12);
   dropDownMenuFont= QFont("Arial",12);


   lblMajor->setText("Major");
   lblMajor->setFont(dropDownMenuFont);
   lblMajor->setStyleSheet("QLabel{ color: white; min-width: 100;qproperty-alignment: AlignCenter;} QLabel::hover{ background-color : #615D57;}");

   lblAmerican->setText("American");
   lblAmerican->setFont(dropDownMenuFont);
   lblAmerican->setStyleSheet("QLabel{ color: white; min-width: 100;qproperty-alignment: AlignCenter;} QLabel::hover{ background-color : #615D57;}");

   lblNational->setText("National");
   lblNational->setFont(dropDownMenuFont);
   lblNational->setStyleSheet("QLabel{ color: white; min-width: 100;qproperty-alignment: AlignCenter;} QLabel::hover{ background-color : #615D57;}");


   lbldiststad->setText("Distance Between Two Stadiums");
   lbldiststad->setFont(dropDownMenuFont);
   lbldiststad->setStyleSheet("QLabel{ color: white; min-width: 100;qproperty-alignment: AlignCenter;} QLabel::hover{ background-color : #615D57;}");

   lblManageConcessions->setText("Manage");
   lblManageConcessions->setFont(dropDownMenuFont);
   lblManageConcessions->setStyleSheet("QLabel{ color: white; min-width: 100;qproperty-alignment: AlignCenter;} QLabel::hover{ background-color : #615D57;}");

   lblAddConcessions->setText("Add Item");
   lblAddConcessions->setFont(dropDownMenuFont);
   lblAddConcessions->setStyleSheet("QLabel{ color: white; min-width: 100;qproperty-alignment: AlignCenter;} QLabel::hover{ background-color : #615D57;}");

   stadiumMenu= new QMenu(this);
   shortest_path_Menu = new QMenu(this);
   search_Menu = new QMenu(this);
   stadiumlist_action = new QAction(this);


   adminMenu = new QMenu(this);
   concessionMenu = new QMenu(this);


   stadiumMenu->setFont(parentMenuFont);
   adminMenu->setFont(parentMenuFont);



   stadiumMenu->setTitle("Stadium");
   adminMenu->setTitle("Admin");





   shortest_path_Menu->setTitle("Shortest path from CA");
   search_Menu->setTitle("Search");
   stadiumlist_action->setText("Stadium List");

   concessionMenu->setTitle("Concessions");

   stadiumMenu->setStyleSheet("QMenu { font-size:14px; font-weight:bold; color:white; background-color: #3B3F42;} QMenu::item:selected {background-color: #615D57;}");
   //stadiumMenu->setStyleSheet("QMenu::item { background-color: #3B3F42;  }");
   //stadiumMenu->setStyleSheet("background-color: #3B3F42");

   shortest_path_Menu->setStyleSheet("background-color: #3B3F42");
   search_Menu->setStyleSheet("background-color: #3B3F42");

   stadiumMenu->addMenu(shortest_path_Menu);
   stadiumMenu->addMenu(search_Menu);
   stadiumMenu->addAction(stadiumlist_action);

   shortest_path_Menu->addAction(shortestMajor_action);
   shortest_path_Menu->addAction(shortestAmerican_action);
   shortest_path_Menu->addAction(shortestNational_action);

   search_Menu->addAction(distbetweenstad_action);


   adminMenu->setStyleSheet("QMenu { font-size:14px; font-weight:bold; color:white; background-color: #3B3F42;} QMenu::item:selected {background-color: #615D57;}");
   concessionMenu->setStyleSheet("background-color: #3B3F42");
   adminMenu->addMenu(concessionMenu);

    concessionMenu->addAction(addConcession_Action);
    concessionMenu->addAction(manageConcession_Action);

   ui->pushButton->setStyleSheet("QPushButton::menu-indicator{ border:none; image: url(none.jpg); }");
   ui->pushButton->setMenu(stadiumMenu);

   ui->pushButton_2->setStyleSheet("QPushButton::menu-indicator{ border:none; image: url(none.jpg); }");
   ui->pushButton_2->setMenu(adminMenu);

   connect(shortestMajor_action,SIGNAL(triggered(bool)),this,SLOT(OnTriggered(bool)));
   connect(distbetweenstad_action,SIGNAL(triggered(bool)),this,SLOT(OnShortestDistance(bool)));
   connect(stadiumlist_action,SIGNAL(triggered(bool)),this,SLOT(onStadiumList(bool)));

   connect(manageConcession_Action,SIGNAL(triggered(bool)),this,SLOT(onManageConcession(bool)));
   connect(addConcession_Action,SIGNAL(triggered(bool)),this,SLOT(onAddConcession(bool)));

}


void MenuBarWidget::OnTriggered(bool value)
{
    QWidget* view = new QWidget;
    emit Navigate(view);
}

void MenuBarWidget::OnShortestDistance(bool value)
{
    QWidget* view = new ShortestDistanceWidget;
    emit Navigate(view);
}

void MenuBarWidget::onStadiumList(bool value)
{
   if(this->serviceManager.getLoginService()->LoggedIn())
   {
    auto view = new StadiumListWidget;
    this->serviceManager.getNavigationService()->Navigate(view);
   }
   else
   {
       QMessageBox msg;
       msg.setText("Must be Logged in");
       msg.setInformativeText("You must be logged in to do that");
       msg.exec();
   }
}


void MenuBarWidget::onDropDownMenuShow()
{
   QMenu* menu;
   menu =dynamic_cast<QMenu*>(QObject::sender());
   menu->setMinimumWidth(ui->pushButton->width());
}

void MenuBarWidget::onAddConcession(bool value)
{
    if(this->serviceManager.getLoginService()->LoggedIn())
    {
      if(this->serviceManager.getLoginService()->IsAdmin())
      {
      auto view = new AddConcessionItemFormView(this->serviceManager);

      this->serviceManager.getNavigationService()->Navigate(view);
      }
      else
      {

          QMessageBox msg;
          msg.setText("Admin Mode Only");
          msg.setInformativeText("Adminstrators only");
          msg.exec();
      }
    }
    else
    {
        QMessageBox msg;
        msg.setText("Must be Logged in");
        msg.setInformativeText("You must be logged in to do that");
        msg.exec();
    }
}

void MenuBarWidget::onManageConcession(bool value)
{
   if(this->serviceManager.getLoginService()->LoggedIn())
   {
     if(this->serviceManager.getLoginService()->IsAdmin())
     {
     auto view = new ManageConcessionsView(this->serviceManager);
     this->serviceManager.getNavigationService()->Navigate(view);
     }
     else
     {
         QMessageBox msg;
         msg.setText("Admin Mode Only");
         msg.setInformativeText("Adminstrators only");
         msg.exec();
     }
   }
   else

   {

       QMessageBox msg;
       msg.setText("Must be Logged in");
       msg.setInformativeText("You must be logged in to do that");
       msg.exec();
   }
}

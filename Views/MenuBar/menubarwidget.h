#ifndef MENUBARWIDGET_H
#define MENUBARWIDGET_H

#include <QWidget>
#include <QMenu>
#include "Views/Stadium/shortestdistancewidget.h"
#include "Services/servicemanager.h"
#include "Views/Concessions/addconcessionitemformview.h"
#include "Views/Concessions/manageconcessionsview.h"
#include "stadiumlistwidget.h"
namespace Ui {
class MenuBarWidget;
}

class MenuBarWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MenuBarWidget(const ServiceManager& serviceManager);
    ~MenuBarWidget();

private:
    void initializeMenu();
signals:
   void Navigate(QWidget* view);

private slots:
    void OnTriggered(bool value);
    void OnShortestDistance(bool value);
    void onStadiumList(bool value);
    void onDropDownMenuShow();

    void onAddConcession(bool value);
    void onManageConcession(bool value);

private:
    Ui::MenuBarWidget *ui;
    const ServiceManager& serviceManager;
};

#endif // MENUBARWIDGET_H

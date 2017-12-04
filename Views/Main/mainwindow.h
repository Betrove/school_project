#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Models/user.h"
#include <QMainWindow>
#include "Services/servicemanager.h"
#include "Views/AccountBar//accountbarwidget.h"
#include "Views/MenuBar/menubarwidget.h"
#include "Views/Content/contentviewwidget.h"
#include "Views/Main/appstartupview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

private slots:

    void on_pushButton_clicked();

private:
    void setUpGui();

private:
    Ui::MainWindow *ui;
const ServiceManager* serviceManager;
};

#endif // MAINWINDOW_H

#ifndef ACCOUNTBARLOGINWIDGET_H
#define ACCOUNTBARLOGINWIDGET_H

#include <QWidget>
#include "Extensions/clickablelabel.h"
#include "Services/servicemanager.h"

namespace Ui {
class AccountBarLoginWidget;
}

class AccountBarLoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AccountBarLoginWidget(QWidget *parent = 0);
    ~AccountBarLoginWidget();

private slots:
    void loginLabelClicked();

signals:
    void loginRequested();

private:
    Ui::AccountBarLoginWidget *ui;
};

#endif // ACCOUNTBARLOGINWIDGET_H

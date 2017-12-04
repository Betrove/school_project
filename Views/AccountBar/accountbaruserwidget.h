#ifndef ACCOUNTBARUSERWIDGET_H
#define ACCOUNTBARUSERWIDGET_H

#include <QWidget>
#include "Models/user.h"
#include "Extensions/clickablelabel.h"
namespace Ui {
class AccountBarUserWidget;
}

class AccountBarUserWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AccountBarUserWidget(User user);
    ~AccountBarUserWidget();

private slots:
    void logoutLabelClicked();

signals:
    void logoutRequested();

private:
    Ui::AccountBarUserWidget *ui;
    User currentUser;
};

#endif // ACCOUNTBARUSERWIDGET_H

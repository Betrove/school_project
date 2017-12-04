#ifndef ACCOUNTWIDGET_H
#define ACCOUNTWIDGET_H

#include "models/user.h"
#include <QWidget>

namespace Ui {
class AccountWidget;
}

class AccountWidget : public QWidget
{
    Q_OBJECT

public:
     AccountWidget(User user);
    ~AccountWidget();

private slots:
  void mousePressEvent(QMouseEvent *event);
  bool event(QEvent* e) override;

signals:
  void clicked();
  void hover();

private:
    Ui::AccountWidget *ui;
    User currentUser;
};

#endif // ACCOUNTWIDGET_H

#ifndef LOGINDIALOGVIEW_H
#define LOGINDIALOGVIEW_H

#include <QWidget>
#include <QPainter>
#include "Services/servicemanager.h"
namespace Ui {
class LoginDialogView;
}

class LoginDialogView : public QWidget
{
    Q_OBJECT

public:
    explicit LoginDialogView(QWidget* parent);
    ~LoginDialogView();
    void paintEvent(QPaintEvent* event);




signals:
    void tryLogin(UserCredential credential);

private slots:
    void onLoginButtonClicked(bool value);


private:
    Ui::LoginDialogView *ui;
};

#endif // LOGINDIALOGVIEW_H

#ifndef APPSTARTUPVIEW_H
#define APPSTARTUPVIEW_H

#include <QWidget>
#include <QPainter>
namespace Ui {
class AppStartUpView;
}

class AppStartUpView : public QWidget
{
    Q_OBJECT

public:
    explicit AppStartUpView(QWidget *parent = 0);
    ~AppStartUpView();
    void paintEvent(QPaintEvent* event);

private:
    Ui::AppStartUpView *ui;
};

#endif // APPSTARTUPVIEW_H

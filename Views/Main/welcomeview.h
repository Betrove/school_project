#ifndef WELCOMEVIEW_H
#define WELCOMEVIEW_H

#include <QWidget>

namespace Ui {
class WelcomeView;
}

class WelcomeView : public QWidget
{
    Q_OBJECT

public:
    explicit WelcomeView(QWidget *parent = 0);
    ~WelcomeView();

private:
    Ui::WelcomeView *ui;
};

#endif // WELCOMEVIEW_H

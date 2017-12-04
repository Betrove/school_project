#ifndef CONTENTVIEWWIDGET_H
#define CONTENTVIEWWIDGET_H

#include <QWidget>
#include <QResizeEvent>
#include "Views/Main/appstartupview.h"
namespace Ui {
class ContentViewWidget;
}

class ContentViewWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ContentViewWidget(QWidget *parent = 0);
    ~ContentViewWidget();
private slots:
    void onViewChangeEvent(QWidget* widget);
private:
    Ui::ContentViewWidget *ui;
};

#endif // CONTENTVIEWWIDGET_H

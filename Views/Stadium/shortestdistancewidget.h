#ifndef SHORTESTDISTANCEWIDGET_H
#define SHORTESTDISTANCEWIDGET_H

#include <QWidget>

namespace Ui {
class ShortestDistanceWidget;
}

class ShortestDistanceWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ShortestDistanceWidget(QWidget *parent = 0);
    ~ShortestDistanceWidget();
private slots:
    void on_pushButton_clicked();
private:
    Ui::ShortestDistanceWidget *ui;
};

#endif // SHORTESTDISTANCEWIDGET_H

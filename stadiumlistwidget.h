#ifndef STADIUMLISTWIDGET_H
#define STADIUMLISTWIDGET_H

#include "Repositories/stadiumrepository.h"
#include <QWidget>

namespace Ui {
class StadiumListWidget;
}

class StadiumListWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StadiumListWidget(QWidget *parent = 0);
    void loadStadiums();
    void loadSortedGrassTypeStadiums();
    void loadSortedLeagueTypeStadiums();
    void loadSortedOpeningDateStadiums();
    ~StadiumListWidget();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::StadiumListWidget *ui;
};

#endif // STADIUMLISTWIDGET_H

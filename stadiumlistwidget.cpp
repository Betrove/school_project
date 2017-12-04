#include "stadiumlistwidget.h"
#include "ui_stadiumlistwidget.h"

StadiumListWidget::StadiumListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StadiumListWidget)
{
    ui->setupUi(this);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    loadStadiums();
}

void StadiumListWidget::loadStadiums()
{
    StadiumRepository repository;

    auto items = repository.getAll();

    this->ui->tableWidget->setRowCount(items.size());

    for (auto r=0; r<items.size(); r++)
    {

      ui->tableWidget->setItem( r, 0, new QTableWidgetItem(items[r].getName().c_str()));
      ui->tableWidget->setItem( r, 1, new QTableWidgetItem(items[r].getTeam().c_str()));
      ui->tableWidget->setItem( r, 2, new QTableWidgetItem(items[r].getAddress().c_str()));
      ui->tableWidget->setItem( r, 3, new QTableWidgetItem(items[r].getPhone().c_str()));
      ui->tableWidget->setItem( r, 4, new QTableWidgetItem(items[r].getType().c_str()));
      ui->tableWidget->setItem( r, 5, new QTableWidgetItem(items[r].getDate().c_str()));
      ui->tableWidget->setItem( r, 6, new QTableWidgetItem(items[r].getCapacity().c_str()));
       ui->tableWidget->setItem( r,7, new QTableWidgetItem(items[r].getGrass().c_str()));

    }
}

void StadiumListWidget::loadSortedGrassTypeStadiums()
{
    StadiumRepository repository;

    auto items = repository.getAllOrderedByGrass();

    this->ui->tableWidget->setRowCount(0);

    this->ui->tableWidget->setRowCount(items.size());

    for (auto r=0; r<items.size(); r++)
    {

      ui->tableWidget->setItem( r, 0, new QTableWidgetItem(items[r].getName().c_str()));
      ui->tableWidget->setItem( r, 1, new QTableWidgetItem(items[r].getTeam().c_str()));
      ui->tableWidget->setItem( r, 2, new QTableWidgetItem(items[r].getAddress().c_str()));
      ui->tableWidget->setItem( r, 3, new QTableWidgetItem(items[r].getPhone().c_str()));
      ui->tableWidget->setItem( r, 4, new QTableWidgetItem(items[r].getType().c_str()));
      ui->tableWidget->setItem( r, 5, new QTableWidgetItem(items[r].getDate().c_str()));
      ui->tableWidget->setItem( r, 6, new QTableWidgetItem(items[r].getCapacity().c_str()));
       ui->tableWidget->setItem( r,7, new QTableWidgetItem(items[r].getGrass().c_str()));

    }

}

void StadiumListWidget::loadSortedLeagueTypeStadiums()
{
    StadiumRepository repository;

    auto items = repository.getAllOrderedByLeague();

    this->ui->tableWidget->setRowCount(0);

    this->ui->tableWidget->setRowCount(items.size());

    for (auto r=0; r<items.size(); r++)
    {

      ui->tableWidget->setItem( r, 0, new QTableWidgetItem(items[r].getName().c_str()));
      ui->tableWidget->setItem( r, 1, new QTableWidgetItem(items[r].getTeam().c_str()));
      ui->tableWidget->setItem( r, 2, new QTableWidgetItem(items[r].getAddress().c_str()));
      ui->tableWidget->setItem( r, 3, new QTableWidgetItem(items[r].getPhone().c_str()));
      ui->tableWidget->setItem( r, 4, new QTableWidgetItem(items[r].getType().c_str()));
      ui->tableWidget->setItem( r, 5, new QTableWidgetItem(items[r].getDate().c_str()));
      ui->tableWidget->setItem( r, 6, new QTableWidgetItem(items[r].getCapacity().c_str()));
       ui->tableWidget->setItem( r,7, new QTableWidgetItem(items[r].getGrass().c_str()));

    }

}

void StadiumListWidget::loadSortedOpeningDateStadiums()
{
    StadiumRepository repository;

    auto items = repository.getAllOrderedByOpeningDate();

    this->ui->tableWidget->setRowCount(0);

    this->ui->tableWidget->setRowCount(items.size());

    for (auto r=0; r<items.size(); r++)
    {

      ui->tableWidget->setItem( r, 0, new QTableWidgetItem(items[r].getName().c_str()));
      ui->tableWidget->setItem( r, 1, new QTableWidgetItem(items[r].getTeam().c_str()));
      ui->tableWidget->setItem( r, 2, new QTableWidgetItem(items[r].getAddress().c_str()));
      ui->tableWidget->setItem( r, 3, new QTableWidgetItem(items[r].getPhone().c_str()));
      ui->tableWidget->setItem( r, 4, new QTableWidgetItem(items[r].getType().c_str()));
      ui->tableWidget->setItem( r, 5, new QTableWidgetItem(items[r].getDate().c_str()));
      ui->tableWidget->setItem( r, 6, new QTableWidgetItem(items[r].getCapacity().c_str()));
       ui->tableWidget->setItem( r,7, new QTableWidgetItem(items[r].getGrass().c_str()));

    }


}

StadiumListWidget::~StadiumListWidget()
{
    delete ui;
}

void loadStadiums()
{

}

void StadiumListWidget::on_pushButton_2_clicked()
{
   loadSortedLeagueTypeStadiums();
}

void StadiumListWidget::on_pushButton_clicked()
{
   loadSortedGrassTypeStadiums();
}

void StadiumListWidget::on_pushButton_3_clicked()
{
    loadSortedOpeningDateStadiums();
}

#ifndef MANAGECONCESSIONSVIEW_H
#define MANAGECONCESSIONSVIEW_H

#include <QWidget>
#include "Repositories/concessionrepository.h"
#include "Services/servicemanager.h"
#include "Views/Concessions/addconcessionitemformview.h"
#include "Views/Concessions/editconcessionitemview.h"
namespace Ui {
class ManageConcessionsView;
}

class ManageConcessionsView : public QWidget
{
    Q_OBJECT

public:
    explicit ManageConcessionsView(const ServiceManager& serviceManager);
    ~ManageConcessionsView();

    void LoadConcessions();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::ManageConcessionsView *ui;
    const ServiceManager& serviceManager;
};

#endif // MANAGECONCESSIONSVIEW_H

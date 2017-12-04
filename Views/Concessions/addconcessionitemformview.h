#ifndef ADDCONCESSIONITEMFORMVIEW_H
#define ADDCONCESSIONITEMFORMVIEW_H

#include <QWidget>
#include "Services/servicemanager.h"
#include "Repositories/concessionrepository.h"

#include "Views/Concessions/manageconcessionsview.h"

namespace Ui {
class AddConcessionItemFormView;
}

class AddConcessionItemFormView : public QWidget
{
    Q_OBJECT

public:
    explicit AddConcessionItemFormView(const ServiceManager& serviceManager);
    ~AddConcessionItemFormView();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddConcessionItemFormView *ui;
    const ServiceManager& serviceManager;
};

#endif // ADDCONCESSIONITEMFORMVIEW_H

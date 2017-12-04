#ifndef EDITCONCESSIONITEMVIEW_H
#define EDITCONCESSIONITEMVIEW_H

#include <QWidget>
#include "Repositories/concessionrepository.h"
#include "Services/servicemanager.h"
#include "Views/Concessions/manageconcessionsview.h"
namespace Ui {
class EditConcessionItemView;
}

class EditConcessionItemView : public QWidget
{
    Q_OBJECT

public:
    explicit EditConcessionItemView( const ServiceManager& serviceManager,int concessionid);
    ~EditConcessionItemView();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::EditConcessionItemView *ui;
    const ServiceManager& serviceManager;
    Concession currentItem;
};

#endif // EDITCONCESSIONITEMVIEW_H

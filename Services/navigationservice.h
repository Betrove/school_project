#ifndef NAVIGATIONSERVICE_H
#define NAVIGATIONSERVICE_H

#include <QObject>
class NavigationService: public QObject
{
 Q_OBJECT
public:
    NavigationService();
    void Navigate(QWidget * view);
public slots:


signals:
void onViewChanged(QWidget* view);


private:
};

#endif // NAVIGATIONSERVICE_H

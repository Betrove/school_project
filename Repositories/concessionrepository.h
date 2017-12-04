#ifndef CONCESSIONREPOSITORY_H
#define CONCESSIONREPOSITORY_H

#include "Repositories/irepository.h"
#include "Models/concession.h"
#include <vector>
#include <QSqlQuery>
#include <QVariant>
#include <QSqlRecord>
class ConcessionRepository:public IRepository<Concession>
{
public:
    ConcessionRepository();
    void create(Concession obj);
    Concession retrieve(int id);
    void update(Concession obj);
    void deleteObject(Concession obj);
    std::vector<Concession> getAll();

};

#endif // CONCESSIONREPOSITORY_H

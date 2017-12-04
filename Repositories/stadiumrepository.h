#ifndef STADIUMREPOSITORY_H
#define STADIUMREPOSITORY_H

#include "Repositories/irepository.h"
#include "models/stadium.h"
#include "QSqlQuery"
#include "QVariant"
#include "QSqlRecord"
class StadiumRepository:public IRepository<Stadium>
{
public:
    StadiumRepository();
    void create(Stadium object);
    Stadium retrieve(int id);
    void update(Stadium object);
    void deleteObject(Stadium object);
    std::vector<Stadium> getAll();
    std::vector<Stadium> getAllOrderedByGrass();
    std::vector<Stadium> getAllOrderedByLeague();
    std::vector<Stadium> getAllOrderedByOpeningDate();
};

#endif // STADIUMREPOSITORY_H

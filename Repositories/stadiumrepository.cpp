#include "stadiumrepository.h"

/*********************************************
* Constructor StadiumRepository:
*   Class Stadium Repository
----------------------------------------------
* Sets up the object
**********************************************/
StadiumRepository::StadiumRepository()
{

}
/************************************
* Method void create(Concession)
------------------------------------
* Preconditions:
* One parameter needed:
*	- obj(Stadium) - New item
* Postconditions:
* Item is added to repository
-----------------------------------
* Returns nothing
**************************************/
void StadiumRepository::create(Stadium object)
{

}
/************************************
* Method stadium retrieve(int)
------------------------------------
* Preconditions:
* One parameter needed:
*	- id(int) - item number
* Postconditions:
* Item is retrieved from repository
-----------------------------------
* Returns nothing
**************************************/
Stadium StadiumRepository::retrieve(int id)
{
   return Stadium();
}
/************************************
* Method void update(Stadium)
------------------------------------
* Preconditions:
* One parameter needed:
*	- obj(Stadium) - item
* Postconditions:
* Item is updated in repository
-----------------------------------
* Returns nothing
**************************************/
void StadiumRepository::update(Stadium object)
{

}
/************************************
* Method void deleteObject(Stadium)
------------------------------------
* Preconditions:
* One parameter needed:
*	- id(int) - item number
* Postconditions:
* Item is deleted from repository
-----------------------------------
* Returns nothing
**************************************/
void StadiumRepository::deleteObject(Stadium object)
{

}
/************************************
* Method vector<Stadium> getall()
------------------------------------
* Preconditions:
* No parameters needed
* Postconditions:
* Item are returned from repository
* in a vector
-----------------------------------
* Returns vector of type Stadium
**************************************/
std::vector<Stadium> StadiumRepository::getAll()
{
    std::vector<Stadium> stadiums;
    QSqlQuery query;
    query.prepare("SELECT * FROM app.stadiums;");

    query.exec();

    while(query.next())
    {
      Stadium stadium;


      stadium.setName(query.record().value("stadium_name").toString().toStdString());
      stadium.setAddress(query.record().value("address").toString().toStdString());
      stadium.setPhone(query.record().value("phone").toString().toStdString());
      stadium.setTeam(query.record().value("team").toString().toStdString());
      stadium.setDate(query.record().value("date").toString().toStdString());
      stadium.setCapacity(query.record().value("capacity").toString().toStdString());
      stadium.setGrass(query.record().value("grass_type").toString().toStdString());
       stadium.setType(query.record().value("league_type").toString().toStdString());

      stadiums.push_back(stadium);
    }


    return stadiums;
}
/************************************
* Method vector<Stadium>
*       getallOrderedByGrass()
------------------------------------
* Preconditions:
* No parameters needed
* Postconditions:
* Item are returned from repository
* in a vector
-----------------------------------
* Returns vector of type Stadium
**************************************/
std::vector<Stadium> StadiumRepository::getAllOrderedByGrass()
{
    std::vector<Stadium> stadiums;
    QSqlQuery query;
    query.prepare("SELECT * FROM app.stadiums ORDER BY grass_type;");

    query.exec();

    while(query.next())
    {
      Stadium stadium;


      stadium.setName(query.record().value("stadium_name").toString().toStdString());
      stadium.setAddress(query.record().value("address").toString().toStdString());
      stadium.setPhone(query.record().value("phone").toString().toStdString());
      stadium.setTeam(query.record().value("team").toString().toStdString());
      stadium.setDate(query.record().value("date").toString().toStdString());
      stadium.setType(query.record().value("league_type").toString().toStdString());
      stadium.setCapacity(query.record().value("capacity").toString().toStdString());
      stadium.setGrass(query.record().value("grass_type").toString().toStdString());

      stadiums.push_back(stadium);
    }


    return stadiums;
}
/************************************
* Method vector<Stadium>
*       getallOrderedByLeague()
------------------------------------
* Preconditions:
* No parameters needed
* Postconditions:
* Item are returned from repository
* in a vector
-----------------------------------
* Returns vector of type Stadium
**************************************/
std::vector<Stadium> StadiumRepository::getAllOrderedByLeague()
{
    std::vector<Stadium> stadiums;
    QSqlQuery query;
    query.prepare("SELECT * FROM app.stadiums ORDER BY league_type;");

    query.exec();

    while(query.next())
    {
      Stadium stadium;


      stadium.setName(query.record().value("stadium_name").toString().toStdString());
      stadium.setAddress(query.record().value("address").toString().toStdString());
      stadium.setPhone(query.record().value("phone").toString().toStdString());
      stadium.setTeam(query.record().value("team").toString().toStdString());
      stadium.setDate(query.record().value("date").toString().toStdString());
      stadium.setCapacity(query.record().value("capacity").toString().toStdString());
      stadium.setGrass(query.record().value("grass_type").toString().toStdString());
      stadium.setType(query.record().value("league_type").toString().toStdString());

      stadiums.push_back(stadium);
    }


    return stadiums;
}
/************************************
* Method vector<Stadium>
*       getallOrderedByOpeningDate()
------------------------------------
* Preconditions:
* No parameters needed
* Postconditions:
* Item are returned from repository
* in a vector
-----------------------------------
* Returns vector of type Stadium
**************************************/
std::vector<Stadium> StadiumRepository::getAllOrderedByOpeningDate()
{
    std::vector<Stadium> stadiums;
    QSqlQuery query;
    query.prepare("SELECT * FROM app.stadiums ORDER BY date;");

    query.exec();

    while(query.next())
    {
      Stadium stadium;


      stadium.setName(query.record().value("stadium_name").toString().toStdString());
      stadium.setAddress(query.record().value("address").toString().toStdString());
      stadium.setPhone(query.record().value("phone").toString().toStdString());
      stadium.setTeam(query.record().value("team").toString().toStdString());
      stadium.setDate(query.record().value("date").toString().toStdString());
      stadium.setCapacity(query.record().value("capacity").toString().toStdString());
      stadium.setGrass(query.record().value("grass_type").toString().toStdString());
      stadium.setType(query.record().value("league_type").toString().toStdString());

      stadiums.push_back(stadium);
    }


    return stadiums;
}

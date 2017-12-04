#include "stadiumrepository.h"

StadiumRepository::StadiumRepository()
{

}

void StadiumRepository::create(Stadium object)
{

}

Stadium StadiumRepository::retrieve(int id)
{
   return Stadium();
}

void StadiumRepository::update(Stadium object)
{

}

void StadiumRepository::deleteObject(Stadium object)
{

}

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

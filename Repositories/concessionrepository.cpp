#include "concessionrepository.h"

/*********************************************
* Constructor ConcessionRepository:
*   Class ConcessionRepository
----------------------------------------------
* Sets up the object
**********************************************/
ConcessionRepository::ConcessionRepository()
{

}

/************************************
* Method void create(Concession)
------------------------------------
* Preconditions:
* One parameter needed:
*	- obj(Concession) - New item
* Postconditions:
* Item is added to repository
-----------------------------------
* Returns nothing
**************************************/
void ConcessionRepository::create(Concession obj)
{
     QSqlQuery query;
     QString itemname;

     itemname = obj.getName().c_str();
     query.prepare("INSERT INTO app.concessions (item_name,price) VALUES(:itemname,:price)");


     query.bindValue(":itemname",itemname);
     query.bindValue(":price",obj.getPrice());

     query.exec();


}
/************************************
* Method concession retrieve(int)
------------------------------------
* Preconditions:
* One parameter needed:
*	- id(int) - item number
* Postconditions:
* Item is retrieved from repository
-----------------------------------
* Returns nothing
**************************************/
Concession ConcessionRepository::retrieve(int id)
{
    QString itemname;
    double price;
    Concession  instance;

    QSqlQuery query;
    query.prepare("SELECT id,item_name,price FROM app.concessions WHERE id =:id;");

    query.bindValue(":id",id);
    query.exec();

    if(query.size() == 1)
     {
       query.next();
       itemname = query.record().value("item_name").toString();
       price =query.record().value("price").toDouble();

       instance.setId(id);
       instance.setItemName(itemname.toStdString());
       instance.setPrice(price);
    }
    else
    {
         throw "No item found with specified id";
    }

   return instance;
}

/************************************
* Method void update(Concession)
------------------------------------
* Preconditions:
* One parameter needed:
*	- obj(Concession) - item
* Postconditions:
* Item is updated in repository
-----------------------------------
* Returns nothing
**************************************/
void ConcessionRepository::update(Concession obj)
{
    QSqlQuery query;
    double price;
    QString itemname;

     itemname= obj.getName().c_str();
     price = obj.getPrice();

    query.prepare("UPDATE app.concessions SET item_name=:itemname,price=:price WHERE id =:id");

    query.bindValue(":id",obj.getId());
    query.bindValue(":itemname",itemname);
    query.bindValue(":price",price);

    query.exec();
}
/************************************
* Method void deleteObject(Concession)
------------------------------------
* Preconditions:
* One parameter needed:
*	- id(int) - item number
* Postconditions:
* Item is deleted from repository
-----------------------------------
* Returns nothing
**************************************/
void ConcessionRepository::deleteObject(Concession obj)
{
    QSqlQuery query;
    query.prepare("DELETE FROM app.concessions WHERE  id=:id");

    query.bindValue(":id",obj.getId());

    query.exec();
}
/************************************
* Method vector<Concessiom> getall()
------------------------------------
* Preconditions:
* No parameters needed
* Postconditions:
* Item are returned from repository
* in a vector
-----------------------------------
* Returns vector of type Concession
**************************************/
std::vector<Concession> ConcessionRepository::getAll()
{
    std::vector<Concession> items;
    QSqlQuery query;
    query.prepare("SELECT * FROM app.concessions;");

    query.exec();

    while(query.next())
    {
      Concession item;

      item.setId(query.record().value("id").toInt());
      item.setItemName(query.record().value("item_name").toString().toStdString());
      item.setPrice(query.record().value("price").toDouble());

      items.push_back(item);
    }


    return items;
}

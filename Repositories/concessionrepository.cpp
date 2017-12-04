#include "concessionrepository.h"

ConcessionRepository::ConcessionRepository()
{

}

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

void ConcessionRepository::deleteObject(Concession obj)
{
    QSqlQuery query;
    query.prepare("DELETE FROM app.concessions WHERE  id=:id");

    query.bindValue(":id",obj.getId());

    query.exec();
}

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

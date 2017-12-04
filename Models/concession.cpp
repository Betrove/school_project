#include "concession.h"

Concession::Concession()
{

}

void Concession::setPrice(double price)
{
    this->price = price;
}

void Concession::setItemName(std::string name)
{
    this->item_name = name;
}

double Concession::getPrice()
{
    return this->price;
}

std::string Concession::getName()
{
    return this->item_name;
}

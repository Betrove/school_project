#ifndef CONCESSION_H
#define CONCESSION_H

#include "imodel.h"
#include <string>
class Concession:public IModel
{
public:
    Concession();
void setPrice(double price);
void setItemName(std:: string);
double getPrice();
std::string getName();
private:
double price;
std::string item_name;
};

#endif // CONCESSION_H

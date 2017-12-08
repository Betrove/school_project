#include "concession.h"

/*********************************************
* Constructor Concession: Class Concession
----------------------------------------------
* Sets up the Concession class
**********************************************/
Concession::Concession()
{

}

/************************************
* Method void setPrice(double)
------------------------------------
* Preconditions:
* One parameter needed:
*	- price(double) - New price
* Postconditions:
* Price of item is changed
-----------------------------------
* Returns nothing
**************************************/
void Concession::setPrice(double price)
{
    this->price = price;
}

/************************************
* Method void setItemName(double)
------------------------------------
* Preconditions:
* One parameter needed:
*	- price(double) - New price
* Postconditions:
* Price of item is changed
-----------------------------------
* Returns nothing
**************************************/
void Concession::setItemName(std::string name)
{
    this->item_name = name;
}

/********************************************
* Method double getprice()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the price of the item
-------------------------------------------
* Returns price
*******************************************/
double Concession::getPrice()
{
    return this->price;
}

/********************************************
* Method string getName()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the name of the item
-------------------------------------------
* Returns item_name
*******************************************/
std::string Concession::getName()
{
    return this->item_name;
}

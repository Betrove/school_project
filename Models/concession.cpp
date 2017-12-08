#include "concession.h"

/*********************************************
* Constructor Concession: Class Concession
----------------------------------------------
* Sets up the label class
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
in the UI
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
in the UI
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
in the UI
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
* Method double getName()
--------------------------------------------
* Preconditions:
* No parameter needed
in the UI
* Postconditions:
* returns the name of the item
-------------------------------------------
* Returns item_name
*******************************************/
std::string Concession::getName()
{
    return this->item_name;
}

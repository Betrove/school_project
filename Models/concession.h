#ifndef CONCESSION_H
#define CONCESSION_H

#include "imodel.h"
#include <string>

/*****************************************
 * Concession Class
 * ---------------------------------------
 * This class represents an item of the
 * concession stand
 ****************************************/
class Concession:public IModel
{
public:
    /**************************
     * Constructor/Destructor *
     **************************/
    Concession();
    /*************
     * Mutator
     ************/
void setPrice(double price);
void setItemName(std:: string);
/*******************
 *     Accessors   *
 ******************/
double getPrice();
std::string getName();
private:
double price;//Price of product
std::string item_name; // Name of product
};
/******************************
 **     CONSTRUCTOR          **
 ******************************/
/****************************************************************
* Concession();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void setPrice(double)
*
*   Mutator; Changes the price of the concession item
*------------------------------------------------------------------
*   Parameter: price(double)    -   Price of item
*------------------------------------------------------------------
*   Return: Nothing; changes price
*******************************************************************/
/*******************************************************************
* void setItemname(string)
*
*   Mutator; Changes the name of the concession item
*------------------------------------------------------------------
*   Parameter: name(string)    -   Name of item
*------------------------------------------------------------------
*   Return: Nothing; changes name
*******************************************************************/
/***************
** Accessor  **
***************/
/*******************************************************************
* double getPrice()
*
*   Accessor; Gets the price of the item
*------------------------------------------------------------------
*   Parameter: None
*------------------------------------------------------------------
*   Return: Price of item as a double
*******************************************************************/
/*******************************************************************
* string getPrice()
*
*   Accessor; Gets the name of the item
*------------------------------------------------------------------
*   Parameter: None
*------------------------------------------------------------------
*   Return: Name of item as a string
*******************************************************************/
#endif // CONCESSION_H

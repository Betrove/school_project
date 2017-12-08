#ifndef STADIUM_H
#define STADIUM_H

#include "string"
class Stadium
{
public:
    /**************************
     * Constructor/Destructor *
     **************************/
    Stadium();
    /*************
     * Mutator
     ************/
void setName(std::string name);
void setAddress(std::string address);
void setPhone(std::string phone);
void setType(std::string type);
void setDate(std::string date);
void setTeam(std::string team);
void setCapacity(std::string capacity);
void setGrass(std::string grass);

/*******************
 *     Accessors   *
 ******************/
std::string getName() const;
std::string getAddress() const;
std::string getPhone() const;
std::string getType() const;
std::string getTeam() const;
std::string getDate() const;
std::string getCapacity();
std::string getGrass() const;

private:
std::string name;
std::string address;
std::string phone;
std::string type;
std::string date;
std::string capacity;
std::string team;
std::string grasstype;
};
/*****************************************
 * Stadium Class
 * ---------------------------------------
 * This class represents individual
 * stadiums and their information
 ****************************************/
/******************************
 ** CONSTRUCTOR & DESTRUCTOR **
 ******************************/
/****************************************************************
* Stadium();
*   Constructor; Initialize class attributes
*   Parameters: none
*   Return: none
***************************************************************/
/***************
** Mutators  **
***************/
/*******************************************************************
* void setName(string)
*
*   Mutator; changes name of stadium
*------------------------------------------------------------------
*   Parameter: name(string) - Name of stadium
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void setAddress(string)
*
*   Mutator; changes address of stadium
*------------------------------------------------------------------
*   Parameter: address(string) - address of stadium
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void setPhone(string)
*
*   Mutator; changes phone of stadium
*------------------------------------------------------------------
*   Parameter: phone(string) - phone of stadium
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void setType(string)
*
*   Mutator; changes type of stadium
*------------------------------------------------------------------
*   Parameter: type(string) - type of stadium
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void setDate(string)
*
*   Mutator; changes date of stadium opening
*------------------------------------------------------------------
*   Parameter: date(string) - date of stadium opening
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void setTeam(string)
*
*   Mutator; changes team of stadium
*------------------------------------------------------------------
*   Parameter: team(string) - team of stadium
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void setCapacity(string)
*
*   Mutator; changes capacity of stadium
*------------------------------------------------------------------
*   Parameter: date(string) - capacity of stadium
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void setGrass(string)
*
*   Mutator; changes grass type of stadium
*------------------------------------------------------------------
*   Parameter: grass(string) - grass type of stadium
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/***************
** Accessors  **
***************/
/*******************************************************************
* void getName(string)
*
*   Accessor; gets the name of stadium
*------------------------------------------------------------------
*   Parameter: name(string) - Name of stadium
*------------------------------------------------------------------
*   Return: name
*******************************************************************/
/*******************************************************************
* void getAddress(string)
*
*   Accessor; gets the address of stadium
*------------------------------------------------------------------
*   Parameter: address(string) - address of stadium
*------------------------------------------------------------------
*   Return: address
*******************************************************************/
/*******************************************************************
* void getPhone(string)
*
*   Accessor; gets the phone of stadium
*------------------------------------------------------------------
*   Parameter: phone(string) - phone of stadium
*------------------------------------------------------------------
*   Return: phone
*******************************************************************/
/*******************************************************************
* void getType(string)
*
*   Accessor; gets the type of stadium
*------------------------------------------------------------------
*   Parameter: type(string) - type of stadium
*------------------------------------------------------------------
*   Return: type
*******************************************************************/
/*******************************************************************
* void getDate(string)
*
*   Accessor; gets the date of stadium opening
*------------------------------------------------------------------
*   Parameter: date(string) - date of stadium opening
*------------------------------------------------------------------
*   Return: date
*******************************************************************/
/*******************************************************************
* void getTeam(string)
*
*   Accessor; gets the team of stadium opening
*------------------------------------------------------------------
*   Parameter: team(string) - team of stadium
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void getCapacity(string)
*
*   Accessor; gets the capacity of stadium
*------------------------------------------------------------------
*   Parameter: date(string) - capacity of stadium
*------------------------------------------------------------------
*   Return: Nothing
*******************************************************************/
/*******************************************************************
* void getGrass(string)
*
*   Accessor; gets the grass type of stadium
*------------------------------------------------------------------
*   Parameter: grass(string) - grass type of stadium
*------------------------------------------------------------------
*   Return: name
*******************************************************************/
#endif // STADIUM_H

#include "stadium.h"
/*********************************************
* Constructor Stadium: Class Stadium
----------------------------------------------
* Sets up the label class
**********************************************/
Stadium::Stadium()
{

}

/************************************
* Method void setName(string)
------------------------------------
* Preconditions:
* One parameter needed:
*	- name(string) - New name
* Postconditions:
* Name of stadium is changed
-----------------------------------
* Returns nothing
**************************************/
void Stadium::setName(std::string name)
{
    this->name = name;
}

/************************************
* Method void setAddress(string)
------------------------------------
* Preconditions:
* One parameter needed:
*	- address(string) - New address
* Postconditions:
* Address of stadium is changed
-----------------------------------
* Returns nothing
**************************************/
void Stadium::setAddress(std::string address)
{
    this->address = address;
}

/************************************
* Method void setPhone(string)
------------------------------------
* Preconditions:
* One parameter needed:
*	- phone(string) - New phone
* Postconditions:
* Phone of stadium is changed
-----------------------------------
* Returns nothing
**************************************/
void Stadium::setPhone(std::string phone)
{
    this->phone = phone;
}

/************************************
* Method void setType(string)
------------------------------------
* Preconditions:
* One parameter needed:
*	- type(string) - New type
* Postconditions:
* Type of stadium is changed
-----------------------------------
* Returns nothing
**************************************/
void Stadium::setType(std::string type)
{
    this->type  = type;
}

/************************************
* Method void setDate(string)
------------------------------------
* Preconditions:
* One parameter needed:
*	- date(string) - New date
* Postconditions:
* Date of stadium is changed
-----------------------------------
* Returns nothing
**************************************/
void Stadium::setDate(std::string date)
{
    this->date = date;
}
/************************************
* Method void setTeam(string)
------------------------------------
* Preconditions:
* One parameter needed:
*	- Team(string) - New team name
* Postconditions:
* Team name of stadium is changed
-----------------------------------
* Returns nothing
**************************************/
void Stadium::setTeam(std::string team)
{
    this->team = team;
}

/************************************
* Method void setCapacity(string)
------------------------------------
* Preconditions:
* One parameter needed:
*	- capacity(string) - New capacity
* Postconditions:
* Capacity of stadium is changed
-----------------------------------
* Returns nothing
**************************************/
void Stadium::setCapacity(std::string capacity)
{
    this->capacity = capacity;
}
/************************************
* Method void setGrass(string)
------------------------------------
* Preconditions:
* One parameter needed:
*	- grass(string) - New grass type
* Postconditions:
* Grass type of stadium is changed
-----------------------------------
* Returns nothing
**************************************/
void Stadium::setGrass(std::string grass)
{
    this->grasstype = grass;
}
/********************************************
* Method string getName()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the name of the stadium
-------------------------------------------
* Returns name
*******************************************/
std::string Stadium::getName() const
{
  return this->name;
}

/********************************************
* Method double getName()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the address of the stadium
-------------------------------------------
* Returns address
*******************************************/
std::string Stadium::getAddress() const
{
    return this->address;
}

/********************************************
* Method string getPhone()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the phone number of the stadium
-------------------------------------------
* Returns phone
*******************************************/
std::string Stadium::getPhone() const
{
    return this->phone;
}
/********************************************
* Method string getType()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the type of the stadium
-------------------------------------------
* Returns type
*******************************************/
std::string Stadium::getType() const
{
    return this->type;
}
/********************************************
* Method string getTeam()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the team name of the stadium
-------------------------------------------
* Returns team
*******************************************/
std::string Stadium::getTeam() const
{
    return this->team;
}
/********************************************
* Method string getDate()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the date opening of the stadium
-------------------------------------------
* Returns date
*******************************************/
std::string Stadium::getDate() const
{
    return this->date;
}
/********************************************
* Method string getCapacity()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the capacity of the stadium
-------------------------------------------
* Returns capacity
*******************************************/
std::string Stadium::getCapacity()
{
    return this->capacity;
}
/********************************************
* Method string getGrass()
--------------------------------------------
* Preconditions:
* No parameter needed
* Postconditions:
* returns the grass type of the stadium
-------------------------------------------
* Returns grassType
*******************************************/
std::string Stadium::getGrass() const
{
    return this ->grasstype;
}

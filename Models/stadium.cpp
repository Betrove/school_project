#include "stadium.h"

Stadium::Stadium()
{

}

void Stadium::setName(std::string name)
{
    this->name = name;
}

void Stadium::setAddress(std::string address)
{
    this->address = address;
}

void Stadium::setPhone(std::string phone)
{
    this->phone = phone;
}

void Stadium::setType(std::string type)
{
    this->type  = type;
}

void Stadium::setDate(std::string date)
{
    this->date = date;
}

void Stadium::setTeam(std::string team)
{
    this->team = team;
}

void Stadium::setCapacity(std::string capacity)
{
    this->capacity = capacity;
}

void Stadium::setGrass(std::string grass)
{
    this->grasstype = grass;
}

std::string Stadium::getName() const
{
  return this->name;
}

std::string Stadium::getAddress() const
{
    return this->address;
}

std::string Stadium::getPhone() const
{
    return this->phone;
}

std::string Stadium::getType() const
{
    return this->type;
}

std::string Stadium::getTeam() const
{
    return this->team;
}

std::string Stadium::getDate() const
{
    return this->date;
}

std::string Stadium::getCapacity()
{
    return this->capacity;
}

std::string Stadium::getGrass() const
{
    return this ->grasstype;
}

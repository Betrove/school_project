#ifndef STADIUM_H
#define STADIUM_H

#include "string"
class Stadium
{
public:
    Stadium();
void setName(std::string name);
void setAddress(std::string address);
void setPhone(std::string phone);
void setType(std::string type);
void setDate(std::string date);
void setTeam(std::string team);
void setCapacity(std::string capacity);
void setGrass(std::string grass);

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

#endif // STADIUM_H

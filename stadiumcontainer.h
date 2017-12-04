#ifndef STADIUMCONTAINER_H
#define STADIUMCONTAINER_H

#include "stadium.h"
#include "vector"
class StadiumContainer
{
public:
    StadiumContainer();
std::vector<Stadium> getStadiums();
private:
std::vector<Stadium> stadiums;
};

#endif // STADIUMCONTAINER_H

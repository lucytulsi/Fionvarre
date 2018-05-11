#pragma once

#include <string>
#include "LocationId.h"

class Location
{
public:
   Location(std::string description,
            int north,
            int east,
            int south,
            int west);

   std::string get_description();
   int get_north();
   int get_east();
   int get_south();
   int get_west();

private:
   std::string m_description;
   int m_north;
   int m_east;
   int m_south;
   int m_west;
};

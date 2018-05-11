#pragma once

#include <map>
#include "Location.h"

class Map
{
public:
   Map(int id, Location &location);

   void AddLocation(int id, Location &location);
   Location *get_location(int id);

   static const int BlockedDirection = 100;

private:
   std::map<int, Location*> m_locations;
};

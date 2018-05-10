#include "Map.h"

using namespace ::std;

Map::Map(int id, Location &location)
{
   AddLocation(id, location);
}

void Map::AddLocation(int id, Location &location)
{
   m_locations[id] = &location;
}

Location *Map::get_location(int id)
{
   if (id == BlockedDirection)
      return nullptr;

   return m_locations.at(id);
}


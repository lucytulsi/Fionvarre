#pragma once

#include <string.h>
#include "Location.h"
#include "Map.h"

class Player
{
public:
   Player(Location &start, Map &map);
   std::string Look();
   bool MoveNorth();
   bool MoveEast();
   bool MoveSouth();
   bool MoveWest();

private:
   bool Move(int locationId);
   Location &m_location;
   Map &m_map;
};

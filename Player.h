#pragma once

#include <string.h>
#include "Location.h"

class Player
{
public:
   Player(Location &start);
   std::string Look();
   bool MoveNorth();   
   bool MoveEast();   
   bool MoveSouth();   
   bool MoveWest();   

private:
   Location &m_currentLocation;
};

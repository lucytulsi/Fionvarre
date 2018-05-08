#pragma once

#include <string.h>
#include "Location.h"

class Player
{
public:
   Player(Location &start);
   std::string Look();

private:
   Location &m_currentLocation;
};

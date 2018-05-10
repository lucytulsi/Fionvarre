#include "Player.h"

using namespace ::std;

Player::Player(Location &start, Map &map)
   : m_location(start),
   m_map(map)
{
}

string Player::Look()
{
   return m_location.get_description();
}

bool Player::MoveNorth()
{
   int north =  m_location.get_north();
   return Move(north);
}

bool Player::MoveEast()
{
   int east = m_location.get_east();
   return Move(east);
}

bool Player::MoveSouth()
{
   int south = m_location.get_south();
   return Move(south);
}

bool Player::MoveWest()
{
   int west = m_location.get_west();
   return Move(west);
}

bool Player::Move(int locationId)
{
   Location *location = m_map.get_location(locationId);

   if (location == nullptr)
   {
      return false;
   }
   else
   {
      m_location = *location;
   }

   return true;
}

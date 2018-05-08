#include "Player.h"

using namespace ::std;

Player::Player(Location &start)
   : m_currentLocation(start)
{
}

string Player::Look()
{
   return m_currentLocation.get_description();
}

bool Player::MoveNorth()
{
   return false;
}

bool Player::MoveEast()
{
   return false;
}

bool Player::MoveSouth()
{
   return false;
}

bool Player::MoveWest()
{
   return false;
}

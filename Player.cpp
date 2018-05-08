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

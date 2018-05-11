#include "Location.h"

using namespace ::std;

Location::Location(string description,
                   int north,
                   int east,
                   int south,
                   int west)
   : m_description(description),
   m_north(north),
   m_east(east),
   m_south(south),
   m_west(west)
{
}

string Location::get_description()
{
   return m_description;
}

int Location::get_north()
{
   return m_north;
}

int Location::get_east()
{
   return m_east;
}

int Location::get_south()
{
   return m_south;
}

int Location::get_west()
{
   return m_west;
}


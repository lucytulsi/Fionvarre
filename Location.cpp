#include "Location.h"

using namespace ::std;

Location::Location(string description)
   : m_description(description)
{
}

string Location::get_description()
{
   return m_description;
}

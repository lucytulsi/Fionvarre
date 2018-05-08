#pragma once

#include <string>

class Location
{
public:
   Location(std::string description);
   std::string get_description();

private:
   std::string m_description;
};

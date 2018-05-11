#include <stdio.h>
#include <string>
#include <assert.h>
#include "tests.Navigation.h"
#include "../Location.h"
#include "../Player.h"
#include "../Map.h"

using namespace ::std;

enum Locations
{
   start,
   north,
   east,
   south,
   west
};

void NavigationTests::Can_not_move_when_no_location_is_set()
{
   string description = "Golden sands under foot, rolling waves of the Atlantic.";

   Location beach(description,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Map::BlockedDirection);
   Map map(Locations::start, beach);

   Player player(beach, map);

   assert(player.MoveNorth() == false);
   assert(player.Look() == description);
   assert(player.MoveEast() == false);
   assert(player.Look() == description);
   assert(player.MoveSouth() == false);
   assert(player.Look() == description);
   assert(player.MoveWest() == false);
   assert(player.Look() == description);
}

void NavigationTests::Can_move_north_when_location_is_set()
{
   string startDescription = "\nStart\n";
   string northDescription = "\nYou moved north\n";

   Location start(startDescription,
                  Locations::north,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Map::BlockedDirection);
   Location north(northDescription,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Locations::start,
                  Map::BlockedDirection);
   Map map(Locations::north, north);

   Player player(start, map);

   assert(player.MoveNorth() == true);
   assert(player.Look() == northDescription);
}

void NavigationTests::Can_move_east_when_location_is_set()
{
   string startDescription = "\nStart\n";
   string eastDescription = "\nYou moved east\n";

   Location start(startDescription,
                  Map::BlockedDirection,
                  Locations::east,
                  Map::BlockedDirection,
                  Map::BlockedDirection);
   Location east(eastDescription,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Locations::start);
   Map map(Locations::east, east);

   Player player(start, map);

   assert(player.MoveEast() == true);
   assert(player.Look() == eastDescription);
}

void NavigationTests::Can_move_south_when_location_is_set()
{
   string startDescription = "\nStart\n";
   string southDescription = "\nYou moved south\n";

   Location start(startDescription,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Locations::south,
                  Map::BlockedDirection);
   Location south(southDescription,
                  Locations::start,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Map::BlockedDirection);
   Map map(Locations::south, south);

   Player player(start, map);

   assert(player.MoveSouth() == true);
   assert(player.Look() == southDescription);
}

void NavigationTests::Can_move_west_when_location_is_set()
{
   string startDescription = "\nStart\n";
   string westDescription = "\nYou moved west\n";

   Location start(startDescription,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Locations::west);
   Location west(westDescription,
                  Map::BlockedDirection,
                  Locations::start,
                  Map::BlockedDirection,
                  Map::BlockedDirection);
   Map map(Locations::west, west);

   Player player(start, map);

   assert(player.MoveWest() == true);
   assert(player.Look() == westDescription);
}

void NavigationTests::RunAll()
{
   printf("Running Navigation Tests...\n");

   Can_not_move_when_no_location_is_set();
   Can_move_north_when_location_is_set();
   Can_move_east_when_location_is_set();
   Can_move_south_when_location_is_set();
   Can_move_west_when_location_is_set();

   printf("All Navigation Tests Pass!!!\n\n");
}


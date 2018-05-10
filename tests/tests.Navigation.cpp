#include <stdio.h>
#include <string>
#include <assert.h>
#include "tests.Navigation.h"
#include "../Location.h"
#include "../Player.h"

using namespace ::std;

void NavigationTests::Can_not_move_when_no_location_is_set()
{
   string description = "\nGolden sands under foot, rolling waves of the Atlantic.\n"
      "Coast paths to the North and South, steep cliff steps to the East.\n";

   Location beach(description);

   Player player(beach);

   assert(player.MoveNorth() == false);
   assert(player.MoveEast() == false);
   assert(player.MoveSouth() == false);
   assert(player.MoveWest() == false);
}

void NavigationTests::Can_move_north_when_location_is_set()
{
   string startDescription = "\nStart\n";
   string northDescription = "\nYou moved north\n";

   Location start(startDescription);
   Location north(northDescription);

   Player player(start);

   assert(player.MoveNorth() == true);
   assert(player.Look() == northDescription);
}

void NavigationTests::Can_move_east_when_location_is_set()
{
   string startDescription = "\nStart\n";
   string eastDescription = "\nYou moved east\n";

   Location start(startDescription);
   Location east(eastDescription);

   Player player(start);

   assert(player.MoveEast() == true);
   assert(player.Look() == eastDescription);
}

void NavigationTests::Can_move_south_when_location_is_set()
{
   string startDescription = "\nStart\n";
   string southDescription = "\nYou moved south\n";

   Location start(startDescription);
   Location south(southDescription);

   Player player(start);

   assert(player.MoveSouth() == true);
   assert(player.Look() == southDescription);
}

void NavigationTests::Can_move_west_when_location_is_set()
{
   string startDescription = "\nStart\n";
   string westDescription = "\nYou moved west\n";

   Location start(startDescription);
   Location west(westDescription);

   Player player(start);

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

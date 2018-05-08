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

void NavigationTests::RunAll()
{
   printf("Running Navigation Tests...\n");
   Can_not_move_when_no_location_is_set();
   printf("All Navigation Tests Pass!!!\n\n");
}

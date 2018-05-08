#include <stdio.h>
#include <assert.h>
#include <string>
#include "tests.Player.h"
#include "../Location.h"
#include "../Player.h"

using namespace ::std;

void PlayerTests::Player_can_look_at_current_location()
{
   string description = "\nGolden sands under foot, rolling waves of the Atlantic.\n"
      "Coast paths to the North and South, steep cliff steps to the East.\n";

   Location beach(description);

   Player player(beach);

   assert(player.Look() == description);
}

void PlayerTests::RunAll()
{
   printf("Running Player Tests...\n");
   Player_can_look_at_current_location();
   printf("All Player Tests Pass!!!\n\n");
}

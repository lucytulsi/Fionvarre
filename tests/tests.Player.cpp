#include <stdio.h>
#include <assert.h>
#include <string>
#include "tests.Player.h"
#include "../Location.h"
#include "../Player.h"
#include "../Map.h"

using namespace ::std;

void PlayerTests::Player_can_look_at_current_location()
{
   string description = "Golden sands under foot, rolling waves of the Atlantic.";

   Location beach(description,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Map::BlockedDirection,
                  Map::BlockedDirection);
   Map map(1, beach);

   Player player(beach, map);

   assert(player.Look() == description);
}

void PlayerTests::RunAll()
{
   printf("Running Player Tests...\n");
   Player_can_look_at_current_location();
   printf("All Player Tests Pass!!!\n\n");
}

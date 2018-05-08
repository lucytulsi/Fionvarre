#include <stdio.h>
#include "tests.Player.h"

int main()
{
   printf("\nRunning All Tests...\n\n");
   
   PlayerTests::RunPlayerTests();

   printf("\nAll Tests Pass!!\n\n");
}

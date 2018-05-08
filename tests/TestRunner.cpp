#include <stdio.h>
#include "tests.Player.h"
#include "tests.Navigation.h"

int main()
{
   printf("\nRunning All Tests...\n\n");
   
   PlayerTests::RunAll();
   NavigationTests::RunAll();

   printf("\nAll Tests Pass!!\n\n");
}

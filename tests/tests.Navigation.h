
class NavigationTests
{
public:
   static void RunAll();

private:
   static void Can_not_move_when_no_location_is_set();
   static void Can_move_north_when_location_is_set();
   static void Can_move_east_when_location_is_set();
   static void Can_move_south_when_location_is_set();
   static void Can_move_west_when_location_is_set();
};

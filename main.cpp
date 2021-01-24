// Include iostream so i can show text and stuff
#include <iostream>
#include <cstdlib>
#include <unistd.h>

// Include game files
#include "defineClasses.h"
#include "setGameVariables.h"
#include "utils/utils.h"
#include "rooms/rooms.h"



// Enter main
int main()
{
  // Set starting values
  #include "setDefaults.h"
  // start game loop
  while(true)
  {
    // Load specified room
    if(loadRoom == -1) // Exit game if next room to load is -1
    {
      break;
    }
    else if(loadRoom == 0) // Loads main room if next room is 0
    {
      loadRoom = mainRoom();
    }
    else if(loadRoom == 1) // Loads shop room if next room is 1
    {
      loadRoom = shopRoom();
    }
    else if(loadRoom == 2)
    {
      loadRoom = fishRoom();
    }

  }
  // Return 0 because the program has ended
  return 0;
}

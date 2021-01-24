// Room where you get the fish you sell to get money
int fishRoom()
{
  clear(); // clear the screen
  std::cout << "[Fish Room]\n\nFishing...\n\n"; // You can guess what this is

  // Fishing loop
  for(int i = 0; i < 100; i++)
  {
    usleep(20000); // Sleep for 0.02 seconds so that this takes atleast 2 seconds to complete

    // Give fish
    for(int f = 0; f < 8; f++)
    {
      if(Fish[f].unlocked == false) // Check if fish is unavalible
      {
        continue; // Go to next iteration if true
      } else {
        // Else check if program should give fish
        if(calcChance(Fish[f].rarity,Fish[f].rarityReference) == true)
        {
          Fish[f].ownedAmount++; // If true then give fish
        }
      }
    }
  }
  return 0; // Return 0 because we need to go back to the menu
}

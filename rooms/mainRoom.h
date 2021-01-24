int mainRoom()
{
  clear();
  std::cout << "[Main Room]\n\n 1. Fish\n 2. Shop\n 3. Exit\n\n> ";
  int input;
  std::cin >> input;
  if(input == 1)
  {
    return 2;
  }
  if(input == 2)
  {
    return 1;
  }
  return -1;
}

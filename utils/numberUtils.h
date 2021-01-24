// A function that calculates how many percent value is in referance to maxValue
double calcPercent(double value, double maxValue)
{
  return maxValue/100.0*value;
}

// A function that generates a random number inbetween 0 and maxValue and checks if its below target, if not it returns false
bool calcChance(double target, int maxValue)
{
  if(rand()%maxValue < target)
  {
    return true;
  } else {
    return false;
  }
  return false;
}

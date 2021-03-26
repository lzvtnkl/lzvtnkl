#include <iostream>

int main()
{
  std::cout << "Enter the number of seconds:"; 
  long long seconds;
  std::cin >> seconds; 
  
  const int  days = seconds / 86400; 
  const int hours = seconds % 86400 / 24; 
  const int minutes = seconds % 86400 / 24 / 60; 
  const int SECONDS  = seconds % 86400 / 24 / 60 / 60; 

  std::cout << seconds << " Seconds = " << days  << " days, "<< hours <<  " hours, " << minutes << " minutes and  " << SECONDS << " seconds" ; 

  return 0;
}
#include <iostream>

int main()
{
  std::cout << "Enter the number of people in Ukraine  ";
  long long nu; 
  std::cin >> nu; 
  std::cout << " Enter the number of people in the world   ";
  long long nw; 
  std::cin >> nw; 
  std::cout << " There are : " << nu << "people in Ukraine\n"; 
  std::cout << "There are :" << nw << "people in the world\n";
  std::cout <<"The population in Ukraine is" << nu * 100 / nw << " %" <<" of the world population"; 
  return 0;
}
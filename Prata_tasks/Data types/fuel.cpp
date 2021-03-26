#include <iostream>

int main()
{
 std::cout << "Enter the count of kilometers you drove";
 double km;
 std::cin >> km; 
 std::cout << "Enter the count og gazoline you spent";
 double gaz;
 std::cin >> gaz;
 double miles = km * 0.62; 
 double gallons = gaz * 3.875;
 std::cout << "Fuel consumpion in american style= "<< miles / gallons << " miles/ gal.";
  return 0;
}
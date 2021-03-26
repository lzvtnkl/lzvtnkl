#include <iostream>

int main() 
{
 int height;
 std::cout << "Enter your height in santimetrs:___\b\b\b";
 std::cin >> height; 
 const int x = height; 
 std::cout << "You are "<< x/100 << " meters and "<< x % 100<< " santimeters\n";

return 0;
}
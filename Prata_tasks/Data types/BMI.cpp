#include <iostream>

int main()
{
 int weight;
 int height; 
 std::cout << "Ener your weight___\b\b\b "; 
 std::cin >> weight; 
 std::cout << "ibs.\n Enter your height ___\b\b\b ";
 std::cin >> height ;
 std::cout << "inchs\n";

 const  double WEIGHT = weight / 2.2;
 const  double HEIGHT = height / 2.54; 
 const  double SQUARE_height = HEIGHT * HEIGHT; 


 std::cout << "Your BMI = " << WEIGHT / SQUARE_height * 10000 ; 

return 0; 
}


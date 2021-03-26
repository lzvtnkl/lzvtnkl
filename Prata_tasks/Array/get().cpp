#include <iostream>
int main()
{
using namespace std; 
const int Arsize =2; 
char name[Arsize];
char dessert[Arsize];

cout << "Enter your name \n";
cin.get(name, Arsize).get(); 
cout << "Enter your favorite dessert";
cin.get(dessert, Arsize).get();
cout << "I have some delisious " << dessert; 
cout << " for you, "<< name ; 



  return 0;
}
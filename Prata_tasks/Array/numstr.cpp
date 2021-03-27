#include <iostream>
int main()
{
using namespace std; 
cout << "What year was your house built?\n";
int year;
cin >> year;
cout << "What is its street adress?";
char adress[80]; 
cin.getline(adress, 80) .get(); 
cout << "Year built: "<< year << endl;
cout << "Adress: " << adress << endl; 
cout << "Done!\n"; 

 return 0;
}
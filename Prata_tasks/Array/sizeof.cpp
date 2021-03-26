#include <iostream>

int main()
{
using namespace std; 
 int yams[3];
 yams[0] = 7;
 yams[1] = 8;
 yams[2] = 6; 

 int yamcosts[3] = {20 , 30 , 5 }; 
 cout << "Total yams = ";
 cout << yams[0] + yams [1] + yams [2]<< endl; 
 cout << "The package with" << yams[1] << "yams costs"; 
 cout << yamcosts[0]<<"cents per yam.\n";

 int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] ;
 total = total + yams[2] * yamcosts[2]; 
 cout << "Total yam expence is" << total << "cents.\n"; 

 cout << "\nSize of yams array = " << sizeof yams; 
 cout << "bytes.\n";
 cout << "Size of ome element = " << sizeof yams[0];
 cout << "bytes.\n";
 return 0; 
} 




 

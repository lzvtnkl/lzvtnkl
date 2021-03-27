#include <iostream>
#include <string>

int main()
{
  using namespace std; 
  string s1 = "penguin";
  string s2, s3;

  cout << "You can assign one string object to another: s2 = s1\n";
  s2 = s1;
  cout << "s1: " << s1 <<  " , s2 " << s2 << endl; 

  cout << "You can assign a C-style string to a string object.\n";
  cout << "s2 = \"bluzzard\" \n"; 
  s2 = "bluzzard"; 
  cout << " s2: " << s2 << endl; 

  cout << "Youcan concatenate strings: s3 = s1 + s2\n";
  s3 = s1+ s2; 
  cout << " You can append strings.\n";
  s2 += " for a day ";
  cout << "s2 +=\" for a day \" yields s2 = " << s2 << endl; 


  return 0;
}
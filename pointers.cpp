// pointers.cpp
/* Short program demonstrates the difference between printing 
   a pointer variable without the ampersand and printing the
   pointer variable with it
*/

#include <iostream>

using namespace std;

int main ( )
{
  int x = 5; 
  int *ptr = &x; // & is used to attain memory address of x
  
  cout << "Value of x: " << x << endl; // should print value of x which is 5
  cout << "*ptr :" << *ptr << endl;    // shoud print value of x again
  cout << "ptr : " << ptr << endl;     // shoud print the memory address at which x is stored
  return 0;
}

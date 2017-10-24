#include <iostream>

using namespace std;

int main() {
  cout << "A pointer is a data type which stores an address." << endl;
  cout << "To declare that a variable is a pointer, just add * in definition" << endl;
  cout << "Address of variable is denoted by &" << endl;
  cout << endl;

  int x = 5;
  cout << "int x = 5" << endl;
  int *p = &x; 
  cout << "int *p = &x; // int pointer which holds address of variable x" << endl;
  cout << endl;
  
  cout << "x: " << x << endl;
  cout << "&x: " << &x << endl;
  cout << "p: " << p << endl;
  cout << "*p: " << *p << endl;
  cout << "// NOTE: *p is an alias for x" << endl;
  cout << endl;

  x = x + 5;
  cout << "x = x + 5: " << x << endl;
  x = *p + 5;
  cout << "x = *p + 5: " << x << endl;
  *p = *p + 5;
  cout << "*p = *p + 5: " << x << endl;
  cout << endl;

  cout << "*p: " << *p << endl;
  cout << "x: " << x << endl;
  cout << endl;

  cout << "& and * operator cancel each other out: " << endl;
  cout << "&*p: " << &*p << endl;
  return 0;
}

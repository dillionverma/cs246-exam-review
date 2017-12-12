#include <iostream>

using namespace std;

int main() {
  // A pointer is a data type which stores an address. 
  // To declare that a variable is a pointer, just add * in definition
  // Address of variable is denoted by &

  int x = 5;
  int *p = &x;  // int pointer which holds address of variable x 

  // NOTE: *p is an alias for x

  x = x + 5;    // 10
  x = *p + 5;   // 15
  *p = *p + 5;  // 20

  //notice how (x == *p)
  cout << x << endl;
  cout << *p << endl;

  // & and * operator cancel each other out: 
  cout << *&p << endl;
  cout << p << endl;

  return 0;
}

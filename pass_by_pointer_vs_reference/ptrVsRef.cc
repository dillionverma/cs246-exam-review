#include <iostream>

using namespace std;

int addOneByRef(int &a) {
  a = a + 1;
  return a;
}

int addOneByPtr(int *a) {
  *a = *a + 1;
  return *a;
}

int main() {
// Both functions do essentially the exact same thing
// Reference is preffered usually because easier to use
// pointer is used in the case you may have to pass a nullptr value as argument to function

  // int declared on stack
  int n = 5;
  addOneByRef(n);       // 6
  addOneByPtr(&n);      // 7

  // int declared on heap
  int *b = new int(10);
  addOneByRef(*b);      // 11
  addOneByPtr(b);       // 12

  delete b;
}


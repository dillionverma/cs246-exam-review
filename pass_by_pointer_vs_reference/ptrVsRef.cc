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
  cout << n << endl;
  addOneByRef(n);
  addOneByPtr(&n);
  cout << n << endl;

  cout << "---" << endl;

  // int declared on heap
  int *b = new int(10);
  cout << *b << endl;
  addOneByRef(*b);
  addOneByPtr(b);
  cout << *b << endl;

  delete b;
}


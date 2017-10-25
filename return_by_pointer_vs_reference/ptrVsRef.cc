#include <iostream>

int returnByValue() {
  return 5;
}

int &returnByRef(int a[], int i) {
  return a[i];
}

int main() {
  int v = returnByValue();

  int a[] = {1, 2, 3, 4, 5};
  returnByRef(a, 3) = 12; // set a[3] = 12;
  // a now equals {1, 2, 3, 12, 5}
  
  std::cout << a[3] << std::endl; // 12

  return 0;
}


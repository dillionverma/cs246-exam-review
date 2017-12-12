#include <iostream>

using namespace std;

int main() {


  cout << "----- Uninitialized (no values) -----" << endl;
  int o[2][3];

  for(int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << o[i][j] << endl;
    }
  }

  cout << "----- default initialized (with 0) -----" << endl;

  int n[2][3] = {};

  for(int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << n[i][j] << endl;
    }
  }

  cout << "----- explicitly initialized -----" << endl;

  int a[2][3] = {{1,2,3},{4,5,6}};

  for(int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << a[i][j] << endl;
    }
  }

  cout << "----- heap initialized -----" << endl;

  // heap initialized
  //int *b = new int[2][3];
  int **b = new int*[2];
  for(int i = 0; i < 2; ++i) {
    b[i] = new int[3];
    for (int j = 0; j < 3; ++j) {
      b[i][j] = (i+1)*(j+1);
    }
  }

  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << b[i][j] << endl;
    }
  }

  for (int i = 0; i < 2; ++i) {
    delete[] b[i];
  }
  delete[] b;

  return 0;
}

#include <iostream>
#include <vector>
#include <exception>
using namespace std;


int main() {
  vector<int> v;

  // catch exception in general
  try {
    cout << v.at(1000) << endl;
  }
  catch (exception& ex) {
    cerr << "Range error " << ex.what() << endl;
  }


  // catch out_of_range (specific error)
  try {
    cout << v.at(1000) << endl;
  }
  catch (std::out_of_range ex) {
    cerr << "Range error " << ex.what() << endl;
  }
  return 0;
}




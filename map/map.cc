#include <iostream>
#include <map>

using namespace std;

int main() {
  // Map is basically an implementation of a dictionary
  // use it to store any key value pair
  
  map<string, int> m;
  m["abc"] = 1;
  m["def"] = 2;
  m["ghi"] = 3;

  cout << m["ghi"] << endl; // 3
  cout << m["abc"] << endl; // 1
  m.erase("abc");

  // Iterate through key value pair
  for (auto &p:m) {
    cout << p.first << ' ' << p.second << endl;
  }

  // Check for existence of key value pair
  if(m.count("abc")) { 
    cout << "abc exists" << endl;
  } else {
    cout << "abc does not exist" << endl;
  }

  return 0;
}

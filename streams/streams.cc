#include <iostream>
#include <sstream>
#include <fstream>
#include <string>


using namespace std;

int main() {
  ifstream in("file.txt");

  string word;
  while (in >> word) {
    cout << word << endl;
  }

  ifstream in2("file.txt");
  char c;
  while (in2 >> noskipws >> c) {
    cout << c << endl;
  }

  // using output string stream
  string hehe;
  ostringstream oss(hehe);
  oss << "hi" << "ok" << "test";  
  cout << oss.str() << endl;


  // using input string stream
  string haha = "test ok hi";
  istringstream iss(haha);
  string tmp;
  while (iss >> tmp) {
    cout << tmp;
  }
  cout << endl;
  cout << iss.str() << endl;

  return 0;
}

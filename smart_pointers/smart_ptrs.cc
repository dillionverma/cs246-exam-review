#include <iostream>
#include <memory>

using namespace std;

int main() {
  // C++ RAII - Resource Acquisition Is Initialization Idiom
  // RAII states that all code which deals with resources should be wrapped
  //   in stack allocated objects. This results in stack allocated object
  //   destructor to be called and prevent anay type of garbage or leaked memory
  // Smart pointers are basically classes initialized on stack which manage
  //   the creation and deletion of anything heap allocated
  // Smart pointers can be accessed using <memory> header
  
  // 3 different methods to create smart pointers
  unique_ptr<int> p{ new int(5) };
  unique_ptr<int> q = make_unique<int>(6);
  auto r = make_unique<int>(7); 

  cout << *p << endl;
  cout << *q << endl;
  cout << *r << endl;

  return 0;
}

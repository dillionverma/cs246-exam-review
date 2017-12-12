#include <iostream>
#include <memory>
using namespace std;


class AImpl {
  int x = 0;
  int y = 1;
  string d = "test";
};

class A {
  unique_ptr<AImpl> pimpl;
  public:
    A():pimpl{unique_ptr<AImpl>()}{}
};


// Above is example of pImpl idiom. This is where pointer to all private fields of class A
//    are abstracted to an implementation class AImpl. This allows for faster compilation and 
//    better coupling
//
// Now Bridge Pattern is same as above but you store multiple pointers to multiple implementations.
//   essentially you factor out the implementations

int main() {
  A a;

  return 0;
}

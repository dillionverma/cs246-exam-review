#include <iostream>
#include <memory>
using namespace std;

struct Fruit { virtual ~Fruit(){}; };
struct Apple : public Fruit { string nameA = "apple";  };
struct Banana: public Fruit { string nameB = "banana"; };


  void whatFruit(shared_ptr<Fruit> f) {
  }

int main() {

  // 1. Static Casting
  //   Used when you are taking full responsibility of type conversions and you can guarantee the conversion
  //   will happen correctly.
  double d = 5.6;
  int i = 4;
  i = static_cast<int>(d);
  cout << i << endl; // outputs 5, notice how floor is applied to double

  // 2. Reinterpret Casting
  //   Used to reintrepet an object as another object.
  Apple a;
  Banana *b = reinterpret_cast<Banana *>(&a);
  cout << b->nameB << endl; // outputs apple, notice how even if variable names are differnet, still reinterpreted

  // 3. Const Cast
  //   Used to bypass restrictions with const and also stop const poisoning
  int x = 3;
  const int &y = x;
  const_cast<int&>(y) = 4;
  cout << y << endl;  // outputs 4 now, even tho const was defined to be 3

  // 4. Dynamic Cast
  //   Used as a safe check to see if type is convertible, if not, then throws exception
  //   Must have at least 1 virtual method to support dynamic cast so polymorphic. Make
  //   decisions based on RTTI (run time type information)
  Fruit *f = new Apple;
  Apple *ap = dynamic_cast<Apple *>(f);
  cout << ap->nameA << endl; // Apple




  //------------------ Smart Pointer Casting ---------------------
  

  // 1. Dynamic Pointer Casting for smart pointers
  shared_ptr<Fruit> ba = make_shared<Banana>();

  if (dynamic_pointer_cast<Apple>(ba)) {
    cout << "Apple" << endl;
  } else if (dynamic_pointer_cast<Banana>(ba)) {
    cout << "Banana" << endl;
  } else {
    cout << "Fruit" << endl;
  }

  // 2. Static Pointer Casting for smart pointers
  shared_ptr<Fruit> ba2 = make_shared<Banana>();
  if (static_pointer_cast<Banana>(ba2)) cout << "Banana" << endl;


  // 3. Const pointer casting for smart poointer
  shared_ptr<int> foo;
  shared_ptr<const int> bar;

  foo = make_shared<int>(10);
  bar = const_pointer_cast<const int>(foo); // 10
  cout << *bar << endl;                     // outputs 10


  return 0;
}

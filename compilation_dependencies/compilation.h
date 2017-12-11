//-------------------- ALL CASES WHERE YOU CAN FORWARD DECLARE --------------------

class X;             // Forward Declaration
class Foo {
  X *x;              // pointer to type
  X &y;              // reference to type
  void f(X x);       // function declaration type argument
  X i();             // function declaration return type
  void g(X *x){}     // function definition with pointer type argument
  void h(X &x){}     // function definition with pointer type argument
  X* j(){};          // function definition return pointer to type
  X& k(){};          // function definition return reference to type
};



//-------------------- ALL CASES WHICH REQUIRE COMPLETE TYPE --------------------

//class Z{ public: int m; };     // uncommenting these lines is same as #include "Z.h" etc, and will
//class Y{};                     //   fix all the compilation errors below.
//class X{};
class Bar : public Y {           // inheritance
  Y y;                           // type member declaration
  void f(Y y) {}                 // function definition type argument
  Y h(){}                        // function definition return type 

  Z *z;                          // pointer (this is acceptable to forward declare)
  int test() { return z->m; }    // accessing a pointers' fields however is not acceptable with forward declare
};


// NOTE: when declaring a reference, make sure you initialize it on object construction

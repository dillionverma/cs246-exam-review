#include <iostream>

using namespace std;

// Template function
template<typename T> T my_min(T x, T y) {
  return x < y ? x : y;
}

// Template class
template<typename T, typename S> 
class Tuple {
  T t;
  S s;
  public:
    Tuple(T t, S s):t{t}, s{s}{}
    T first()  { return t; }
    S second() { return s; }
};


int main() {
  int x=1, y=2;
  int z = my_min(x,y);
  cout << z << endl; // 1

  double a=1.5, b=2.3;
  double c = my_min(a,b);
  cout << c << endl; // 1.5

  Tuple<int, double> t{42, 3.14};
  cout << t.first()  << endl; // 42
  cout << t.second() << endl; // 3.14

  return 0;
}

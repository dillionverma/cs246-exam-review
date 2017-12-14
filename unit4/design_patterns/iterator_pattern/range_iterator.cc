#include <iostream>
using namespace std;

class Range {
  int start, finish;

  public: 
    Range(int a, int b):start{a}, finish{b}{}
    class Iterator {
        int n;
        Iterator(int n):n{n}{}
      public:
        Iterator &operator++(){ ++n; return *this; }
        bool operator!=(const Iterator &rhs) const { return n != rhs.n; }
        int operator*() { return n; }
        friend class Range;
    };

    Iterator begin() { return Iterator(start);  }
    Iterator end()   { return Iterator(finish); }
};


int main() {

  for (auto a:Range{0,10}) cout << a << ' ';
  cout << endl;

  return 0;
}

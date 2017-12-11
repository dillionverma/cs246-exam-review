#include <iostream>

using namespace std;


class Shape1 {
  int id;
  public:
    void draw();
};

class Shape2 {
  public:
    virtual void draw(){};
};


int main() {
  Shape1 q;
  Shape2 r;
  cout << "Shape 1 size: " << sizeof(q) << endl; // size is 4 becuase int id
  cout << "Shape 2 size: " << sizeof(r) << endl; // size is 8 because virtual table (and no int)



  return 0;
}

#include <iostream>
using namespace std;

class Turtle {
  public:
    void draw(){
        drawHead();
        drawShell();
        drawFeet();
    }
  private:
    void drawHead(){
      cout << "Turtle Head" << endl;
    } 
    void drawFeet(){
      cout << "Turtle Feet" << endl;
    }
    virtual void drawShell() = 0;  //pure virtual, subclasses can customize
};

class RedTurtle: public Turtle {
  void drawShell() override{
    cout << "Turtle Red Shell" << endl;
  }
};

class GreenTurtle: public Turtle {
  void drawShell() override {
    cout << "Turtle Green Shell" << endl;
  }
};


// Subclasses can choose the way some parts are drawm, but not all parts. 
//   This also follows NVI idiom. NVI idiom is to make virtual methods private, and create accesors
//   to them as public methods.


int main() {
  GreenTurtle gt;
  gt.draw();

  cout << endl;

  RedTurtle rt;
  rt.draw();

  return 0;
}

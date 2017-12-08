#include <iostream>
#include <memory>

using namespace std;

class Pizza {
  public:
    virtual float price() const=0;
    virtual string desc() const=0;
    virtual ~Pizza(){};
};

class CrustAndSauce: public Pizza {
  public:
    float price() const override { return 5.99; }
    string desc() const override { return "Pizza"; }
};

class Decorator: public Pizza {
  protected:
    Pizza *component;
  public:
    Decorator(Pizza *p):component{p}{}
    ~Decorator() { delete component; }
};

class StuffedCrust: public Decorator {
  public:
    StuffedCrust(Pizza *p):Decorator{p}{}
    float price() const override { return component->price() + 2.69; }
    string desc() const override { return component->desc() + " with stuffed crust"; }
};

class Topping: public Decorator {
  string theTopping;
  public:
    Topping(string t, Pizza *p):Decorator{p}, theTopping{t}{}
    float price() const override { return component->price() + 0.75; }
    string desc() const override { return component->desc() + " with " + theTopping; }
};


int main() {
  Pizza *p = new CrustAndSauce;
  p = new StuffedCrust(p);
  p = new Topping("cheese", p);
  p = new Topping("olives", p);
  cout << p->desc() << endl;
  cout << p->price() << endl;

  delete p;
  return 0;
}

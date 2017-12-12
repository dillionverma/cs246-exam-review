#include <iostream>

using namespace std;

class Enemy {
};

class Level {
  public:
    virtual Enemy *createEnemy()=0;
};

class Easy: public Level {
  public:
    Enemy *createEnemy() override {
      cout << "Easy level creates mostly turtles" << endl;
    }
};

class Hard: public Level {
  public:
    Enemy *createEnemy() override {
      cout << "Hard level creates mostly bullets" << endl;
    }
};



int main() {
  Level *l1 = new Easy;
  Enemy *e1 = l1->createEnemy();

  Level *l2 = new Hard;
  Enemy *e2 = l2->createEnemy();

  delete l1;
  delete l2;
  return 0;
}

#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include <algorithm>

using namespace std;

class Observer {
  public:
    virtual void notify()=0;
    virtual ~Observer(){};
};

class Subject {
  vector <Observer *> observers;
  public:
    void attach (Observer *ob) { observers.emplace_back(ob); }
    void detach (Observer *ob) { 
      for (auto it = observers.begin(); it != observers.end(); ++it) {
        if (*it == ob) {
          observers.erase(it);
          break;
        }
      }
    }
    void notifyObservers() {
      for (auto &ob:observers) ob->notify();
    }
    virtual ~Subject()=0;
};

Subject::~Subject(){}



class HorseRace: public Subject {
  ifstream in;
  string lastWinner;
  public:
    HorseRace(string source): in{source}{}
    bool runRace() {
      return in >> lastWinner ? true : false;
    }
    string getState() {
      return lastWinner;
    }
};

class Better: public Observer {
  HorseRace *subject;
  public:
  string name, myHorse;
    Better(HorseRace *hr, string name, string h):name{name}, myHorse{h}, subject{hr} {
      subject->attach(this);
    }
    ~Better() { subject->detach(this); }
    void notify() {
      string winner = subject->getState();
      if (winner == myHorse) {
        cout << "WIN!" << endl;
      } else {
        cout << "LOSE!" << endl;
      }
    }
};


int main() {
  HorseRace hr("file.txt");
  Better Larry{ &hr, "Larry", "RunsLikeACow" };

  while(hr.runRace()) {
    hr.notifyObservers();
  }
}

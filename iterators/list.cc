#include <iostream>
using namespace std;


class List {
  struct Node {
    int data;
    Node *next;
    Node(int data, Node *next):data{data}, next{next}{}
    ~Node(){delete next;}
  };

  Node *theList = nullptr;

  public:
    class Iterator{
      Node *p;
      public:
        friend class list;
        Iterator(Node *p):p{p}{}
        int &operator*() { return p->data;}
        Iterator &operator++() { p = p->next; return *this; }
        bool operator!=(const Iterator &other) const { return p!= other.p; }
    };

    List &addToFront(int n) { theList = new Node{n, theList}; return *this; }

    int ith(int i) {
      Node *cur = theList;
      for (int j = 0; j < i; ++j) {
        cur = cur->next;
      }
      return cur->data;
    }

    ~List() { delete theList;}
    Iterator begin(){ return Iterator(theList); }
    Iterator end(){ return Iterator(nullptr );};
};



int main() {
  List l;
  l.addToFront(1).addToFront(2).addToFront(3);

  cout << l.ith(0) << endl;
  cout << l.ith(1) << endl;
  cout << l.ith(2) << endl;
   
  cout << "---" << endl;
  for(List::Iterator it = l.begin(); it != l.end(); ++it) {
    cout << *it << endl;
  }

  cout << "---" << endl;
  for(auto it = l.begin(); it != l.end(); ++it) {
    cout << *it << endl;
  }

  cout << "---" << endl;
  for(const auto i:l) {
    cout << i << endl;
  }

  cout << "---" << endl;
  for(auto &i:l) {
    i++;      // mutate the values because it is a reference
    cout << i << endl;
  }

  return 0;
}

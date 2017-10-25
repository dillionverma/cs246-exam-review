#include <iostream>
using namespace std;


class List {
  struct Node {
    int data;
    Node *next;
    Node *prev;
    Node(int data, Node *next, Node *prev):data{data}, next{next}, prev{prev}{}
    ~Node(){delete next;}
  };

  Node *head = nullptr;
  Node *tail = nullptr;

  public:
    class Iterator{
      Node *p;
      public:
        friend class list;
        Iterator(Node *p):p{p}{}
        int &operator*() { return p->data;}
        Iterator &operator++() { p = p->next; return *this; }
        Iterator &operator--() { p = p->prev; return *this; }
        bool operator!=(const Iterator &other) const { return p!= other.p; }
    };

    List &addToFront(int n) { 
      if (head == nullptr) {head = tail = new Node{n, nullptr, nullptr}; return *this;}
      Node *b = new Node{n, head, nullptr}; 
      head->prev = b;
      head = b;
      return *this; 
    }

    int ith(int i) {
      Node *cur = head;
      for (int j = 0; j < i; ++j) {
        cur = cur->next;
      }
      return cur->data;
    }

    ~List() { delete head;}
    Iterator begin(){ return Iterator(head); }
    Iterator end(){ return Iterator(nullptr);};
    Iterator rbegin(){ return Iterator(nullptr); }
    Iterator rend(){ return Iterator(tail);}
};



int main() {
  List l;
  l.addToFront(1).addToFront(2).addToFront(3);
  l.addToFront(4);
  l.addToFront(5);
 
  cout << "--- List::Iterator ---" << endl;
  for(auto it = l.begin(); it != l.end(); ++it) {
    cout << *it << endl;
  }

  cout << "--- Reverse Iterator using --it ---" << endl;
  for(auto it = l.rend(); it != l.rbegin(); --it) {
    cout << *it << endl;
  }

  return 0;
}

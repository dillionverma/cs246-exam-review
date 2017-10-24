#include <iostream>

using namespace std;

class Node {

  public: 
  int data;
  Node *next;

  Node();
  Node(int d);

  // Big 5
  ~Node();
  Node(const Node &other);
  Node(Node &&other);
  Node &operator=(const Node &other);
  Node &operator=(Node &&other);
};


Node::Node():data{0}, next{nullptr}{
  cout << "Default constructor called" << endl;
}

Node::Node(int d):data{d}, next{nullptr}{
  cout << "Overloaded constructor called" << endl;
}

Node::~Node(){
  cout << "Destructor called" << endl;
  delete next;
}

Node::Node(const Node &other): data{other.data}, next{other.next ? new Node(*other.next) : nullptr} {
  cout << "Copy constructor called" << endl;
}

Node::Node(Node &&other): data{other.data}, next{other.next} {
  cout << "Move constructor called" << endl;
  other.next = nullptr;
  other.data = 0;
}

Node &Node::operator=(const Node &other){
  cout << "Copy assignment called" << endl;
  if (this == &other) return *this;
  delete next;

  data = other.data;
  next = other.next ? next = new Node(*other.next) : nullptr;
  return *this;
}

Node &Node::operator=(Node &&other) {
  cout << "Move assignment called" << endl;
  if (this == &other) return *this;
  swap(data, other.data);
  swap(next, other.next);
  return *this;
}

ostream &operator<<(ostream &out, const Node &n) {
  out << n.data;
  return out;
}


int main() {
  cout << "Big 5 Test: " << endl;
  
  cout << "----------" << endl;

  Node *a = new Node(3);         // overload ctor
  Node *b = new Node(*a);        // copy ctor

  cout << "----------" << endl;

  Node *c = new Node;            // default ctor
  *c = *b;                       // copy assn

  cout << "----------" << endl;

  Node *d = new Node(move(*c));  // move ctor
  
  cout << "----------" << endl;

  Node *e = new Node;            // default ctor
  *e = move(*d);                 // move assn

  cout << "----------" << endl;

  delete a;
  delete b;
  delete c;
  delete d;
  delete e;
}

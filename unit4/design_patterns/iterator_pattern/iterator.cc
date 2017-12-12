

// Make AbstractIterator class to factor out common functions 
class AbstractIterator{
  public: 
    virtual int &operator*() = 0;
    virtual AbstractIterator &operator++() = 0;
    virtual bool operator=(const AbstractIterator &other)const=0;
    virtual ~AbstractIterator();
};

class List {
  //...
  public:
    class Iterator: public AbstractIterator{
      // override abstract iterator functions and implement them
    };
};

class Set {
  //...
  public:
    class Iterator: public AbstractIterator{
      // override abstract iterator functions and implement them
    };
};


// Now it is possible to write code which works for both sets and lists
//   since both iterators inherit from abstract iterator




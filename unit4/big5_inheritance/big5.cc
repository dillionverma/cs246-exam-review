#include <iostream>
#include <string>

using namespace std;


class Book {
  public:
    string title; // bad practice, but just for demonstration
    Book(string title):title{title}{}
    virtual ~Book(){}
    Book(const Book &other):title{other.title}{}
    Book(Book &&other):title{other.title}{}
    Book &operator=(const Book &other) {
      if (this == &other) return *this;
      title = other.title;
      return *this;
    }
    Book &operator=(Book &&other) {
      swap(title, other.title);
      return *this;
    }
};
   

class Text: public Book {
    string topic;
  public:
    Text(string title, string topic):Book{title}, topic{topic}{}
    ~Text(){};
    Text(const Text &other):Book{other}, topic{other.topic}{}
    Text(Text &&other):Book{std::move(other)}, topic{std::move(other.topic)}{}
    Text &operator=(const Text &other) {
      Book::operator=(other);                        // important
      topic = other.topic;
      return *this;
    }
    Text &operator=(Text &&other) {
      Book::operator=(std::move(other));             // important
      topic = std::move(other.topic);
      return *this;
    };
};


// Most important thing about big5 with inheritance is to account for superclass fields

int main() {

  Text *t = new Text("mytitle", "mytopic");
  Book *n = new Text(*t);

  cout << n->title << endl; // test to see if copied

  delete t;
  delete n;
  return 0;
}

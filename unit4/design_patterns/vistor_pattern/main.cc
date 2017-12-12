#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "text.h"
#include "comic.h"
#include "catalogue.h"
#include "BookVisitor.h"

using namespace std;

int main() {
  vector<Book*> collection {
    new Book("War and Peace", "Tolstoy", 5000),
    new Book("Peter Rabbit", "Potter", 50),
    new Text("Programming for Beginners", "??", 200, "BASIC"),
    new Text("Programming for Big Kids", "??", 200, "C++"),
    new Text("Annotated Reference Manual", "??", 200, "C++"),
    new Comic("Aquaman Swims Again", "??", 20, "Aquaman"),
    new Comic("Clark Kent Loses His Glasses", "??", 20, "Superman"),
    new Comic("Superman Saves the Day", "??", 20, "Superman")
  };

  CatalogueVisitor v;

  for (auto &b : collection) b->accept(v);

  for (auto &j : v.getResult())
    cout << j.first << " " << j.second << endl;

  for (auto &b : collection) delete b;
}

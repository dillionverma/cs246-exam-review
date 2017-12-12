#include "comic.h"
#include <string>
#include "BookVisitor.h"

using namespace std;

Comic::Comic(const string &title, const string &author, int numPages, const string &hero):
  Book{title, author, numPages}, hero{hero} {}

bool Comic::isItHeavy() const { return getNumPages() > 30; }
string Comic::getHero() const { return hero; }

// My favourite comic books are Superman comics.
bool Comic::favourite() const { return hero == "Superman"; }

void Comic::accept(BookVisitor &v) { return v.visit(*this); }


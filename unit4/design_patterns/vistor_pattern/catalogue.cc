#include "catalogue.h"
#include "book.h"
#include "text.h"
#include "comic.h"
using namespace std;

map<string, int> CatalogueVisitor::getResult() const { return theCatalogue; }

void CatalogueVisitor::visit(Book &b) {
  ++theCatalogue[b.getAuthor()];
}

void CatalogueVisitor::visit(Comic &c) {
  ++theCatalogue[c.getHero()];
}

void CatalogueVisitor::visit(Text &t) {
  ++theCatalogue[t.getTopic()];
}


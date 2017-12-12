#ifndef __BOOKVISITOR_H__
#define __BOOKVISITOR_H__

class Book;
class Text;
class Comic;

class BookVisitor {
  public:
    virtual void visit(Book &b) = 0;
    virtual void visit(Text &t) = 0;
    virtual void visit(Comic &c) = 0;
    virtual ~BookVisitor();
};

#endif

# CS246 review notes and code samples

## About

This repo was created to collect and share important c++ and bash code snippets from the cs246 course offered at the University of Waterloo :mortar_board:. Feel free to contribute anything else!

## Study Topics

#### Unit 1: Bash

 * basic commands: echo, cat, ls, using variables, etc.
 * stream redirection
 * globbing patterns: *
 * regular expressions with grep
 * Subshells (memorize when to use quotes)
 * Permissions
 * Scripting syntax (variables, conditionals, loops, functions)
 * Testing - human, machine (white, black), performance, regression
 
#### Unit 2: Intro to C++

 * hello world
 * using command line arguments and exit codes
 * I/O with cin, cout, cerr, using getline
 * file streams and string streams
 * C vs C++ strings and C++ string operations
 * Default function parameters
 * Function overloading
 * References (and rvalues vs lvalues)
 * Pass-by-values vs. pass-by-reference vs. pass-by-const-reference
 * Dynamic memory
 * Operator overloading
 * Valgrind 
 * Makefile 

#### Unit 3: C++ / Intro to OOP

 * Preprocessor directives (variables, conditions, defining variables when compiling)
 * Separate compilation and include guards
 * Basics of classes (objects, this pointer, methods)
 * Constructor basics (why we use them, compiler provided methods)
 * object creation steps, the MIL, implicit conversion (explicit keyword)
 * Copy constructors and copy assignment operator
 * Shallow vs. deep copy
 * self-assignment issues
 * copy & swap idiom
 * Destructors and object destruction steps
 * Move constructor and move assignment operator (differences between move and copy)
 * Big 5 (why they're a package, writing them with separation compilation, copy vs move)
 * Copy/move elision
 * Visibility (public vs private), class keyword vs struct keyword, and encapsulation
 * Design patterns (Intro)
 * Iterators (why we need them, auto type, range based loops)

#### Unit 4: Inheritance, Design Patterns, casting etc

 * Inheritance
 * 3 Access Levels and why each one is used/important
 * Dynamic Dispatch/Polymorphism
 * Virtual Methods vs Pure Virtual Methods
 * Abstract classes
 * Concrete classes
 * Partial assignment/Mixed Assignment/Polymorphic Assignmnent
 * [UML](https://www.youtube.com/watch?v=UI6lqHOVHic)
   * Fields
   * Public/Protected Methods (ideally NOT getters/setters)
   * Has-A
   * Owns-A
 * Design Patterns
   * Observer Pattern
   * Decorator Pattern
   * Factory Method Pattern
   * Template Method Pattern
   * Visitor Pattern
   * Bridge Pattern
 * Idioms
   * RAII
   * NVI
   * pImpl
 * Compilation dependencies
 * Templates (nothing to do with design pattern of same name!!)
 * Template keyword
 * Standard Template Library
   * Vector (dynamic length array)
   * Vector Iterator/Reverse_iterator
   * Common vector functions
   * Map (unordered dictionary)
   * Common map functions
   * Iterate through map
 * Casting
   * Static_cast
   * Dynamic_cast
   * Reinterpret_cast
   * Const_cast
 * lambda functions
 * exception safety, throw, catch
 * [vtables and virtual inheritance](https://www.youtube.com/watch?v=Eaz0P_gJ9FE)
 
## Key words to know
 * public
 * protected
 * private
 * final
 * explicit
 * extern
 * auto
 * typename
 * template

## Installation

1. Head over to any directory on your computer and clone the repository:
    ```
    git clone https://github.com/dillionverma/cs246-exam-review.git
    ```
2. For any c++ code you wish to compile, `cd` into folder and run the following:
    ```
    cd cs246-exam-review/big5   # big5 directory for example
    make
    ./main
    ```
3. For any bash script you wish to execute, `cd` into folder and run the following:
    ```
    chmod u+x file_name     # give executable permissions on file for current user
    ./file_name
    ```


## Credits

A big thank you to my Professor __Brad Lushman__ for dedicating his time to teaching this amazing course and also for slipping funny jokes while teaching to make lectures more enjoyable.

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
 * [Big 5](https://github.com/dillionverma/cs246-exam-review/blob/master/unit3/big5/node.cc) (why they're a package, writing them with separation compilation, copy vs move)
 * Copy/move elision
 * Visibility (public vs private), class keyword vs struct keyword, and encapsulation
 * Design patterns (Intro)
 * [Iterators](https://github.com/dillionverma/cs246-exam-review/blob/master/unit3/iterators/list.cc) (why we need them, auto type, range based loops)

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
   * [Observer Pattern](https://github.com/dillionverma/cs246-exam-review/tree/master/unit4/design_patterns/observer_pattern)
   * [Decorator Pattern](https://github.com/dillionverma/cs246-exam-review/tree/master/unit4/design_patterns/decorator_pattern)
   * [Factory Method Pattern](https://github.com/dillionverma/cs246-exam-review/tree/master/unit4/design_patterns/factory_pattern)
   * [Template Method Pattern](https://github.com/dillionverma/cs246-exam-review/tree/master/unit4/design_patterns/template_pattern)
   * [Visitor Pattern](https://github.com/dillionverma/cs246-exam-review/tree/master/unit4/design_patterns/vistor_pattern)
   * [Bridge Pattern](https://github.com/dillionverma/cs246-exam-review/tree/master/unit4/design_patterns/bridge_pattern)
 * Idioms
   * RAII
   * NVI
   * pImpl
   * copy and swap
 * [Compilation dependencies](https://github.com/dillionverma/cs246-exam-review/blob/master/unit4/compilation_dependencies/compilation.h)
 * [Templates](https://github.com/dillionverma/cs246-exam-review/blob/master/unit4/templates/templates.cc) (nothing to do with design pattern of same name!!)
 * [Template keyword](https://github.com/dillionverma/cs246-exam-review/blob/master/unit4/templates/templates.cc)
 * Standard Template Library
   * Vector (dynamic length array)
   * Vector Iterator/Reverse_iterator
   * Common vector functions
   * Map (unordered dictionary)
   * Common map functions
   * Iterate through map
 * [Casting](https://github.com/dillionverma/cs246-exam-review/blob/master/unit4/casting/casting.cc)
   * [Static_cast](https://github.com/dillionverma/cs246-exam-review/blob/master/unit4/casting/casting.cc#L15-L21)
   * [Dynamic_cast](https://github.com/dillionverma/cs246-exam-review/blob/master/unit4/casting/casting.cc#L36-L42)
   * [Reinterpret_cast](https://github.com/dillionverma/cs246-exam-review/blob/master/unit4/casting/casting.cc#L23-L27)
   * [Const_cast](https://github.com/dillionverma/cs246-exam-review/blob/master/unit4/casting/casting.cc#L29-L34)
 * lambda functions
 * [exception safety, throw, catch](https://github.com/dillionverma/cs246-exam-review/blob/master/unit4/try_catch/try_catch.cc)
 * [vtables and virtual inheritance](https://www.youtube.com/watch?v=Eaz0P_gJ9FE)
 
## Key words to know
 * public
 * protected
 * private
 * friend
 * noexcept
 * final
 * explicit
 * extern
 * auto
 * typename
 * template
 * typedef

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

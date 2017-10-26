# CS246 review notes and code samples

## About

This repo was created to collect and share important c++ and bash code snippets from the cs246 course offered at the University of Waterloo :mortar_board:. Feel free to contribute anything else!

## Study Topics

#### Bash

 * Unit 1: Bash
 * basic commands: echo, cat, ls, using variables, etc.
 * stream redirection
 * globbing patterns: *
 * regular expressions with grep
 * Subshells (memorize when to use quotes)
 * Permissions
 * Scripting syntax (variables, conditionals, loops, functions)
 * Testing - human, machine (white, black), performance, regression
 
#### C++ Intro

 * Unit 2: Intro to C++
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

#### C++ / Intro to OOP

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

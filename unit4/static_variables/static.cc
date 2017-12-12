#include <iostream>

class Student {
    //static int count = 0; // Incorrect! Definition should be provided outside class
    static int count;
  public:
    Student() { ++count; }  // notice you don't need special identifier to access count
    static void printCount() { std::cout << count << std::endl; }

};

int Student::count = 0; // NOTE: Must provide definition of static member in global scope
                        //       if number provided, default initialized to 0

// Do NOT define variable in class declaration (see declaration of count in Student)
int main() {
  Student x;
  Student y;
  Student::printCount(); // 2
  Student z;
  Student::printCount(); // 3
  return 0;
}

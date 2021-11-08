//////////////////////////////////////////////////
// PAlib C++ project template                   //
// main.cpp                                     //
// Contains the entry point of the program.     //
//////////////////////////////////////////////////

// Include the application header
#include <PA9.h>
#include <stdio.h>

#include "MyWrapper.h"

// Entry point
int main() {
  // Initialize PAlib
  PA_Init();

  // Run the application
  struct MyApp* c = newMyClass();
  // app.run();
  MyClass_int_set(c);

  deleteMyClass(c);

  return 0;
}

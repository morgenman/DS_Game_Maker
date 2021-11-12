//////////////////////////////////////////////////
// PAlib C++ project template                   //
// MyApp.cpp                                    //
// Main project source code file.               //
//////////////////////////////////////////////////

// Include the application header
#include "MyApp.h"

#include <string>

int MyApp::test(int i) { return i + 1; }

char* MyApp::stringTest() {
  char char1 = 'y';
  char char2 = 'o';

  char* str = (char*)malloc(3);
  str[0] = char1;
  str[1] = char2;
  str[2] = '\0';
  
  return str;
}

char* MyApp::stringTest2() {
  std::string out = "hello my dudes";
  char* c = const_cast<char*>(out.c_str());
  return c;
}

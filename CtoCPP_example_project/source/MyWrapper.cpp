#include "MyWrapper.h"

#include "MyApp.h"

extern "C" {
MyApp* newMyClass() { return new MyApp(); }

void MyClass_int_set(MyApp* v) { v->run(); }


void deleteMyClass(MyApp* v) { delete v; }
}
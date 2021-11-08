#include "MyWrapper.h"

#include "MyApp.h"

extern "C" {
MyApp* newMyClass() { return new MyApp(); }

int test(MyApp* v, int i) { return (v->test(i)); }
char* stringTest(MyApp* v) { return (v->stringTest()); }
char* stringTest2(MyApp* v) { return (v->stringTest2()); }

void deleteMyClass(MyApp* v) { delete v; }
}
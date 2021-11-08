#ifndef __MYWRAPPER_H
#define __MYWRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MyApp MyApp;

MyApp* newMyClass();
char* stringTest(MyApp* v);
char* stringTest2(MyApp* v);

int test(MyApp* v, int i);

void deleteMyClass(MyApp* v);

#ifdef __cplusplus
}
#endif
#endif
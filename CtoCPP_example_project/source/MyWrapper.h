#ifndef __MYWRAPPER_H
#define __MYWRAPPER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MyApp MyApp;

MyApp* newMyClass();

void MyClass_int_set(MyApp* v);

void deleteMyClass(MyApp* v);

#ifdef __cplusplus
}
#endif
#endif
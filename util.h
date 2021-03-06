#ifndef UTILS_H__
#define UTILS_H__

#include <stddef.h>
#include <assert.h>
#include <stdio.h>

typedef char *string;
typedef char bool;
string Id(char *s);


#define TRUE 1
#define FALSE 0

void *checked_malloc(int);
string String(char *); 
string FormatString(string s, ...);

typedef struct U_boolList_ *U_boolList;
struct U_boolList_ {bool head; U_boolList tail;};
U_boolList U_BoolList(bool head, U_boolList tail);
#endif
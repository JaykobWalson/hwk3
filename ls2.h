#ifndef LS2_H_INCLUDED
#define LS2_H_INCLUDED

#include "stack.h"

#define TRUE 1
#define FALSE 0
#define INDENT "    "

// TODO: Function declarations here for ls2
//find the limit stack

DIR* openPath(char*path);
void readPath(char*path);
void closePath(DIR* directory);
#endif 

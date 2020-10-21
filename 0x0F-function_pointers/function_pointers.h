#ifndef __FUNCTION_POINTER_H__
#define __FUNCTION_POINTER_H__

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//* Function that prints a name /*
void print_name(char *name, void (*f)(char *));

//* Function that executes a function given as a parameter on each element of an array /*
void array_iterator(int *array, size_t size, void (*action)(int));

//* Function that searches for an integer /*
int int_index(int *array, int size, int (*cmp)(int));

#endif

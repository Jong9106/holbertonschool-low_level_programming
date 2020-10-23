#ifndef _VAR_H_
#define _VAR_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*Function to sum arguments*/
int sum_them_all(const unsigned int n, ...);
/*Function to print numbers in the arguments*/
void print_numbers(const char *separator, const unsigned int n, ...);
/*Function to print strings in arguments*/
void print_strings(const char *separator, const unsigned int n, ...);
/*Funtion to print all arguments*/
void print_all(const char * const format, ...);

#endif

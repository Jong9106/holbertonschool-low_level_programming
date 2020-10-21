#include "function_pointers.h"

/**
 *print_name - prints a name
 *@name: ponter
 *@f: function pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL || name != NULL)
	{
		f(name);
	}
}

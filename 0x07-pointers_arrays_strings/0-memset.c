
#include "holberton.h"

/**
 * *rot13 - Entry point
 * @s: pointer
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (; n > 0 ; n--, s++)
	*s = b;
return (s);
}

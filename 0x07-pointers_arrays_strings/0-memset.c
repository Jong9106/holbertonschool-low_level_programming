#include "holberton.h"

/**
 * *_memset - Entry point
 * @s: array
 * @b: value
 * @n: byte const
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
return (s);
}

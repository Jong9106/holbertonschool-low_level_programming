#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

/**
 * *_calloc - Entry point
 * @nmemb: array
 * @size: const
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, (size * nmemb));
		return (p);
}

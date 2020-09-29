#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - Entry point
 * @s: one
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int contador;
	int c;

	for (contador = 0 ; s[contador] != '\0' ; contador++)
	{
	}

	for (c = contador ; c >= 0 ; c--)
	{
		if (s[c] != '\0')
		_putchar(s[c]);
	}
_putchar(10);
}

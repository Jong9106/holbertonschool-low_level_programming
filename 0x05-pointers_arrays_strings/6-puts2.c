#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - Entry point
 * @str: one
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int contador;

	for (contador = 0 ; str[contador] != '\0' ; contador++)
	{
	if (contador % 2 == 0)
	_putchar(str[contador]);
	}
_putchar(10);
}

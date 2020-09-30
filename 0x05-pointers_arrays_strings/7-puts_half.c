#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - Entry point
 * @str: one
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int contador, par, impar;

	for (contador = 0 ; str[contador] != '\0' ; contador++)
	{
	}
	if (contador % 2 == 0)
		{
		for (par = contador / 2 ; par < contador ; par++)
		_putchar(str[par]);
		}
	else
		{
		for (impar = ((contador + 1) / 2) ; impar < contador ; impar++)
		_putchar(str[impar]);
		}
_putchar(10);
}

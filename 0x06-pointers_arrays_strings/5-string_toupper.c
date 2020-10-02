#include "holberton.h"
#include <stdio.h>

/**
 * *string_toupper - Entry point
 * @s: pointer
 * Return: Always 0 (Success)
 */
char *string_toupper(char *s)
{
	int cont;

	for (cont = 0 ; s[cont]  != '\0' ; cont++)
	{
		if (s[cont] >= 'a' && s[cont] <= 'z')
		{
		s[cont] = s[cont] - 32;
		}
	}
return (s);
}

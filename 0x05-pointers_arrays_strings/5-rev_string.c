#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 * @s: one
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int contador, rev;
	char temp;

	for (contador = 0 ; s[contador] != '\0'; contador++)
	{
	}
	contador--;
	for (rev = 0 ; rev < contador ; rev++)
	{
	temp = s[rev];
	s[rev] = s[contador];
	s[contador] = temp;
	contador--;
	}
}

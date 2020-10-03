#include "holberton.h"
#include <stdio.h>

/**
 * *rot13 - Entry point
 * @s: pointer
 * Return: Always 0 (Success)
 */
char *rot13(char *s)
{
	int cont = 0;
	int cont2;

	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char e[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	while (s[cont] != '\0')
	{
		for (cont2 = 0 ; cont2 <= 52 ; cont2++)
		{
			if (s[cont] == e[cont2])
			{
			s[cont] = n[cont2];
			break;
			}
		}
	cont++;
	}
return (s);
}

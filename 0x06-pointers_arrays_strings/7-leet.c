#include "holberton.h"
#include <stdio.h>

/**
 * *leet - Entry point
 * @s: pointer
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
	int cont, cont2;

	char n[] = "4433007711";
	char c[] = "aAeEoOtTlL";

	for (cont = 0 ; s[cont] != '\0' ; cont++)
	{
		for (cont2 = 0 ; cont2 <= 9 ; cont2++)
		{
			if (s[cont] == c[cont2])
			{
			s[cont] = n[cont2];
			}
		}
	}
return (s);
}

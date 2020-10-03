#include "holberton.h"
#include <stdio.h>

/**
 * *rot13 - Entry point
 * @s: pointer
 * Return: Always 0 (Success)
 */
char *rot13(char *s)
{
	int cont, cont2;

	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (cont = 0 ; s[cont] != '\0' ; cont++)
	{
		for (cont2 = 0 ; cont2 <= 51 ; cont2++)
		{
			if (s[cont] == c[cont2])
			{
			s[cont] = n[cont2];
			}
		}
	}
return (s);
}

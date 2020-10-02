#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - Entry point
 * @s1: pointer
 * @s2: entrada
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int cont1, cont2, resta;

	for (cont1 = 0 ; s1[cont1] != '\0' ; cont1++)
	{
		for (cont2 = 0 ; s2[cont2] != '\0' ; cont2++)
		{
		resta = s1[cont1] - s2[cont2];
			if (resta < 0)
			{
			return (resta);
			}
			else if (resta > 0)
			{
			return (resta);
			}
			else
			{
			return (0);
			}
		}
	}
return (0);
}

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
	int i, j;

	for (i = 0 ; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
		j = 0;
		}
		else
		{
		return (s1[i] - s2[i]);
		}
	}
return (j);
}

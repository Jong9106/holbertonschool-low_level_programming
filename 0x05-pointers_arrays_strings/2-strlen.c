#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 * @s: one
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	l++;
	return (l);
}

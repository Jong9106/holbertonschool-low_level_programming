#include "holberton.h"

/**
 * _strlen_recursion - Entry point
 * @s: poiter to a string
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

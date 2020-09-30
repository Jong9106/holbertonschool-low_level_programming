#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 * @s: one
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	char x[] = "Holberton";

	s[0] = x[8];
	s[1] = x[7];
	s[2] = x[6];
	s[3] = x[5];
	s[5] = x[3];
	s[6] = x[2];
	s[7] = x[1];
	s[8] = x[0];
}

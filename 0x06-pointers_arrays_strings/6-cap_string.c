#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - Entry point
 * @s: pointer
 * Return: Always 0 (Success)
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if ((s[i - 1] == ' ')
			|| (s[i - 1] == ',')
			|| (s[i - 1] == ';')
			|| (s[i - 1] == '.')
			|| (s[i - 1] == '!')
			|| (s[i - 1] == '?')
			|| (s[i - 1] == '"')
			|| (s[i - 1] == '(')
			|| (s[i - 1] == ')')
			|| (s[i - 1] == '{')
			|| (s[i - 1] == '}')
			|| (s[i - 1] == 9)
			|| (s[i - 1] == 10))
			{
				s[i] = s[i] - 32;
			}
		}
	}
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
return (s);
}


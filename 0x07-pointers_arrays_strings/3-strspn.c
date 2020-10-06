#include "holberton.h"

/**
 * _strspn - Entry point
 * @s: string
 * @accept: compare
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, data = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				data++;
				break;
			}
		}
	if (s[i] != accept[j])
	{
	break;
	}
	}
return (data);
}

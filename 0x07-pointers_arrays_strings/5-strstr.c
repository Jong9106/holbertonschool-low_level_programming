#include "holberton.h"

/**
 * *_strstr - Entry point
 * @haystack: string
 * @needle: second string
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int j, i;

	for (i = 0 ; haystack ; i++)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i] == needle[j])
		{
			j++;
			i++;
		}

		if (j > 0)
		{
			i -= j;
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		break;
		}
	}
return ('\0');
}

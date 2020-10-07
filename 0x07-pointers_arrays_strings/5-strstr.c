#include "holberton.h"

/**
 * *_strstr - Entry point
 * @haystack: string
 * @needle: second string
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int j, i, start;

	i = 0;
	while (haystack[i] != '\0')
	{
		start = i;
		j = 0;
		while (haystack[i] == needle[j] &&
			needle[j] != '\0' && haystack[i] != '\0')
		{
			i++;
			j++;
		}

		if (needle[j] == '\0')
			return (haystack + start);
		i = start + 1;
	}
return ('\0');
}

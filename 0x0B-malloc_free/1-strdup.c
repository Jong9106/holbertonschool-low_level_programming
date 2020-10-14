#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - Entry point
 * @str : size of array
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	int i = 0;
	char *dest;

	for (; str[i] ; ++i)
	{
	}
	if (str == NULL)
	{
		return (NULL);
	}

	dest = malloc(sizeof(*dest) * i);

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
	dest[i] = str[i];
	}
return (dest);

}

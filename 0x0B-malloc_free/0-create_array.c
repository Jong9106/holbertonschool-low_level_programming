#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *create_array - Entry point
 * @size : size of array
 * @c : character
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	int a = 0;
	char *s;
	int _size = (int)size;

	if (_size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * _size);

	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < _size ; a++)
	{
		s[a] = c;
	}
	return (s);
}

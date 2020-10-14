#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * *str_concat - Entry point
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, cp, sum;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0 ; s1[s1_len] != '\0' ; s1_len++)
	{
	}
	for (s2_len = 0 ; s2[s2_len] != '\0' ; s2_len++)
	{
	}
	sum = s1_len + s2_len + 1;

	dest = malloc(sizeof(char) * sum);

	if (dest == NULL)
		return (NULL);

	for (cp = 0 ; cp < s1_len ; cp++)
		dest[cp] = s1[cp];

	for (cp = 0 ; cp < s2_len ; cp++)
		dest[cp + s1_len] = s2[cp];

	dest[s1_len + s2_len] = '\0';
	return (dest);
}

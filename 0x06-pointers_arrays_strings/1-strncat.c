#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - Entry point
 * @dest: pointer
 * @src: entrada
 * @n: entrance
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, av;


	for (dest_len = 0 ; dest[dest_len] != '\0' ; dest_len++)
	{
	}
	for (av = 0 ; av < n ; av++)
	{
	dest[dest_len + av] = src[av];
	}
dest[dest_len + av] = '\0';
return (dest);
}

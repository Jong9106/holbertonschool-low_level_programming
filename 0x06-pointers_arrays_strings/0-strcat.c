#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - Entry point
 * @dest: pointer
 * @src: entrada
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;


	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0 ; src[j] != '\0' ; j++, i++)
	{
	dest[i] = src[j];
	}
dest[i] = '\0';
return(dest);
}

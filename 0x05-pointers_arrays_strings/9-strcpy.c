#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - Entry point
 * @dest: pointer
 * @src: entrada
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int contador;

	for (contador = 0 ; src[contador] ; contador++)
	{
		dest[contador] = src[contador];
	}
	dest[contador] = '\0';
return (dest);
}

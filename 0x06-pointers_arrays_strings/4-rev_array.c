#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - Entry point
 * @dest: pointer
 * @src: entrada
 * @n: entrance
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int cont, temp;

	for (cont = 0 ; cont < n/2 ; cont++)
	{
	temp = a[cont];
	a[cont] = a[n - cont - 1];
	a[n - cont - 1] = temp;
	}

}

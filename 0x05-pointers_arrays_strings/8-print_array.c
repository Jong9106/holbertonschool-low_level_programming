#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: pointer
 * @n: entrada
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
	printf("%d", a[x]);
		if (x + 1 < n)
		{
		putchar(',');
		putchar(' ');
		}
	}
putchar(10);
}

#include "holberton.h"

/**
 * swap_int - Entry point
 * @a: one int
 * @b:two int
 * inter : other
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int inter;

	inter = *a;
	*a = *b;
	*b = inter;
}


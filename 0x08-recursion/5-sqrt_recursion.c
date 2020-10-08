#include "holberton.h"

/**
 * sqrt_check - checks for the square root of c
 * @i:guess at sqrt
 * @r: number to find sqrt of
 * Return: -1 or sqrt of c
 */
int sqrt_check(int i, int r)
{
	if (i * i == r)
	{
		return (i);
	}

	if (i * i > r)
	{
		return (-1);
	}
	return (sqrt_check(i + 1, r));
}

/**
 * _sqrt_recursion - Entry point
 * @n: number to square
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
return (sqrt_check(1, n));
}

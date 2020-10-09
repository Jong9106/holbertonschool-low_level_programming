#include "holberton.h"

/**
 * _new - Entry point
 * @n: number to square
 * @a: divisor
 * Return: Always 0 (Success)
 */
int _new(int n, int a)
{
	if (n % a == 0)
	{
		if (n == a)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
	return (_new(n, a + 1));
	}
}

/**
 * is_prime_number - Entry point
 * @n: number to square
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	int a;

	a = 2;
	if (n > 1)
	{
		return (_new(n, a));
	}
	else
	{
	return (0);
	}
}

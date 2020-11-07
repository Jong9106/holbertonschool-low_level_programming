#include "holberton.h"

/**
 * flip_bits - Fucntion to return number of bit to flip
 * @n: given number a
 * @m: given number b
 * Return: return number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int i = 0;
	unsigned long int x;

	x = n ^ m;

	while (x > 0)
	{
		i++;
		x &= (x - 1);
	}
	return (i);

}

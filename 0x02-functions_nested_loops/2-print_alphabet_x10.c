#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
	_putchar(c);
	}
}
void print_alphabet_x10(void)
{
	int c;

	for (c = '0' ; c <= '9'; c++)
	{
	print_alphabet();
	_putchar('\n');
	}
}
#include "holberton.h"
/**
 * print_alphabet - Entry point
 * print alphabet
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
/**
 * print_alphabet_x10 - Entry point
 * print alphabet 10 times
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int c;

	for (c = '0' ; c <= '9'; c++)
	{
	print_alphabet();
	_putchar('\n');
	}
}

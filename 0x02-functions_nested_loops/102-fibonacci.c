#include <stdio.h>

/**
 * main - Entry point
 * fibonacci
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int fibonacci, n, j, k;

	n = 0;
	j = 1;
	for (fibonacci = 0; fibonacci < 50; fibonacci++)
	{
		k = n + j;
		n = j;
		j = k;
		printf("%ld", k);
		if (fibonacci == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * fibonacci
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n = 51, t1 = 1, t2 = 2, nextTerm;

	for (i = 2; i <= n; i++)
	{
	printf("%d, ", t1);
	nextTerm = t1 + t2;
	t1 = t2;
	t2 = nextTerm;
	}
putchar('\n');
return (0);
}

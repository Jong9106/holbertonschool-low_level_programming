#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = 1 ; numbers <= 100 ; ++numbers)
	{
		if (numbers % 3 == 0 && numbers % 5 == 0)
		{
		printf("FizzBuzz");
		putchar(32);
		continue;
		}
		if (numbers % 3 == 0)
		{
		printf("Fizz");
		putchar(32);
		continue;
		}
		if (numbers % 5 == 0)
		{
		printf("Buzz");
			if (numbers == 100)
			putchar(10);
		putchar(32);
		continue;
		}
	printf("%d ", numbers);
	}
putchar(10);
return (0);
}

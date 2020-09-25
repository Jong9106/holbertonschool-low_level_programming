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
		if (numbers % 15 == 0)
			printf("FizzBuzz");
		else if (numbers % 3 == 0)
			printf("Fizz");
		else if (numbers % 5 == 0)
			printf("Buzz");
		else
			printf("%d", numbers);

		if (numbers != 100)
			printf(" ");
	}
putchar(10);
return (0);
}

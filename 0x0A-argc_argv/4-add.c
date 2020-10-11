#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: name
 * @argv: array of argc
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			if ((*argv[i] >= 'a' && *argv[i] <= 'z')
				|| (*argv[i] >= 'A' && *argv[i] <= 'Z'))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

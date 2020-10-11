#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: name
 * @argv: array of argc
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1 ; i < argc ; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

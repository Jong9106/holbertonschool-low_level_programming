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
	int mult, x, y;

	if (argc != 3)
	{
		printf("Error \n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mult = x * y;
	printf("%d\n", mult);
	return (0);
}

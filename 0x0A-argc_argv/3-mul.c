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

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	if (argc  0)
	{
		printf("Error \n");
	}
	else
	{
		mult = x * y;
		printf("%d\n", mult);
	}
	return(0);
}

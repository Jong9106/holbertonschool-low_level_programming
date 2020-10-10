#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: name
 * @argv: array of argc
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * free_grid - Entry point
 * @grid: square
 * @height: number of rows
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
free(grid);
}

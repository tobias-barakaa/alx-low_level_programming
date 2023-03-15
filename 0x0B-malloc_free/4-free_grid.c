#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * free_grid - two dimensional function
 * @grid: first argument
 * @height: second param
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

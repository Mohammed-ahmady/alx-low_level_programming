#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid.
 *
 * @grid: memory.
 *
 * @height: columns.
 *
 * Return: NULL on failure, s1 and s2 on success.
 */
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}


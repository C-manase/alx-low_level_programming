#include "main.h"

/**
 * free_grid - frees a 2d grid created by alloc_grid function
 * @grid: 2d grid
 * @height: length
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}

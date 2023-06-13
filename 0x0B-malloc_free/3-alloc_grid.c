#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: width of the dimensional
 * @height: height of the dimensional
 *
 * Return: pointer to a 2d array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}

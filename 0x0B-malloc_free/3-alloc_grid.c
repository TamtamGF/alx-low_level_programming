#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer to a 2 dimensional
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2d array of integers, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int ro;
	int col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (ro = 0; ro < height; ro++)
	{
		grid[ro] = malloc(sizeof(int) * width);
		if (grid[ro] == NULL)
		{
			for (col = 0; col < ro; col++)
			{
				free(grid[col]);
			}
			free(grid);
			return (NULL);
		}
		for (col = 0; col < width; col++)
		{
			grid[ro][col] = 0;
		}
	}
	return (grid);
}

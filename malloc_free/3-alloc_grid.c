#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers
 * @width: int
 * @height: int
 * Return: dimensional arrays of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x;
	int y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

		if (grid == NULL)
		return (NULL);

		for (x = 0; x < height; x++)
		{
			grid[x] = malloc(sizeof(int) * width);

			if (grid[x] == NULL)
			{

				for (y = 0; y < x; y++)
				{
				free(grid[y]);
				}

				free(grid);
				return (NULL);
			}
		}

		for (x = 0; x < height; x++)
		{
			for (y = 0; y < width; y++)
			{
			grid[x][y] = 0;
			}
		}

	return (grid);
}

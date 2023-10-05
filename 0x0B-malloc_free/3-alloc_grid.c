#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 *
 * @width: the tested variable
 * @height: the tested variable
 *
 * Return: integer
 */

int **alloc_grid(int width, int height)
{
	char *gridElements;
	unsigned int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	gridElements = malloc(height * sizeof(int *));

	if (gridElements == NULL)
	{
		free(gridElements);
		return (NULL);
	}

	for (i = 0 ; i < height ; i++)
	{
		gridElements[i] = malloc(width * sizeof(int *));

		if (gridElements[i] == NULL)
		{
			for (i-- ; i >= 0 ; i--)
			{
				free(gridElements[i]);
			}
			free(gridElements);
			return (NULL);
		}
	}

		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				gridElements[i][j] = 0;
			}
		}

	return (gridElements);
}

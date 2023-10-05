#include "main.h"

/**
 * free_grid - that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 *
 * @grid: the tested variable
 * @height: the tested variable
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (height ; height >= 0 ; height--)
		{
			free(grid[height]);
		}
		
		free(grid);
	}
}

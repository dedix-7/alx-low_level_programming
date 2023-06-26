#include "main.h"
/**
 * free_grid - free a previously allocated 2d array
 * @grid: double pointer
 * @height: number of rows
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int rowcount;

	for (rowcount = height; rowcount >= 0; rowcount--)
	{
		free(grid[rowcount]);
	}
	free(grid);
}

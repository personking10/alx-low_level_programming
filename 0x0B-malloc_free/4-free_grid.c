#include "main.h"
/**
 * free_grid - free grid
 * @grid: grid of memory
 * @height: int
 * Return: void
 */

void free(int **grid, int height)
{
	int ni = 0;

	for (; ni < height; ni++)
		free(grid[ni]);
	free(grid);
}

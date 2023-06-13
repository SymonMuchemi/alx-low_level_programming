#include "main.h"
/**
 * free_grid - frees up ocuppied memory
 * @grid: a 2D array
 * @height: the arrays height
 * Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

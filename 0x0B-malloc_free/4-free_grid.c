#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function to free the previous grid
 * @grid: first parameter
 * @height: second parameter
 * Return: no return
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

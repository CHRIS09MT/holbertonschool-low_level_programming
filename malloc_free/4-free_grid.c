#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Write a function that frees a 2 dimensional
  * @grid: the address of the two dimensional grid
  * @height: height of the grid
  */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)

		free(grid[i]);

	free(grid);
}

#include "main.h"
/**
* free_grid - This function frees alocated memory
* @grid: grid
* @height: height
*/
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}

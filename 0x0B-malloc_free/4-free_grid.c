#include "main.h"
#include <stdlib.h>
/**
*free_grid - function to free space
*@grid: free this grid
*@height: Grid height
**/
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}

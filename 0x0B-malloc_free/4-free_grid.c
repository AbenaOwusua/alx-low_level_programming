#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function frees grid
 * @grid: parameter of function
 * @height: parameter of function
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0 ; a < height ; a++)
		free(grid[a]);
	free(grid);
}

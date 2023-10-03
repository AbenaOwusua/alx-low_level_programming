#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function creates 2d interger grid using malloc
 * @width: parameter of function
 * @height: parameter of function
 * Return: pointer to new grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, j;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);
	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);
	for (a = 0 ; a < height ; a++)
	{
		grid[a] = malloc(width * sizeof(**grid));
		if (grid[a] == NULL)
		{
			for (a-- ; a >= 0 ; a--)
				free(grid[a]);
		free(grid);
		return (NULL);
	}
	for (j = 0 ; j < width ; j++)
		grid[a][j] = 0;
}
return (grid);
}

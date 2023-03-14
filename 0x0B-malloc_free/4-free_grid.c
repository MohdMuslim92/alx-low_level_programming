#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2 dimensional array
 * Description: a function that frees a 2 dimensional
 * grid previously created by alloc_grid function
 * @grid: pointer to 2 dimensional array passed to the function
 * @height: height dimension passed to the function
 * Return: return nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	int *ptr;

		for (i = 0; i < height; i++)
		{
			ptr = grid[i];
			free(ptr);
		}
		free(grid);

}


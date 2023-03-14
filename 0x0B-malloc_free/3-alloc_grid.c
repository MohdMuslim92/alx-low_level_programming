#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array
 * Description:  a function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: First dimension passed to the function
 * @height: Secon dimension passed to the function
 * @: a pointer to a 2 dimensional array
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k;
	int *ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < height; i++)
		{
			*(arr + i) = (int *)malloc(width * sizeof(int));
			if (*(arr + i) == NULL)
			{
				for (i = 0; i < height; i++)
				{
					ptr = arr[i];
					free(ptr);
				}
				free(arr);
				return (NULL);
			}

		}
		for (k = 0; k < height; k++)
		{
			for (j = 0; j < width; j++)
			{
				arr[k][j] = 0;
			}
		}
	return (arr);

}


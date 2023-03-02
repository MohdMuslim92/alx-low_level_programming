#include "main.h"

/**
 * reverse_array - reverse function
 * Description: a function that reverse n elements
 * in an array passed to it
 * @a: array passed to the function
 * @n: number of elements to be reversed
 * Return: return reversed string
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			k = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = k;
		}
	}
}


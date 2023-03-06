#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sum of two diagonals print function
 * Description: a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: 2D array passed to the function
 * @size: size of array passed to the function
 * Return: return 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int i, j, count1 = 0, count2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		count1 += a[i];
	}
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{
		count2 += a[j];
	}
	printf("%d, %d\n", count1, count2);
}

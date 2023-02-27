#include <stdio.h>
#include "main.h"

/**
 * print_array - output function
 * Description: using a function print_array to print
 * n elements of an array passed to the function
 * @a: address of an array passed to the function
 * @n: number of elements passed to the function
 * Return: return the string
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}


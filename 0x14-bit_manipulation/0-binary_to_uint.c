#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert function
 * DESCRIPTION: a function that convertsa binary
 * number to an unsigned integer
 * @b: pointer to a string passed to the function
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, k;
	unsigned int num = 0;
	/*int arr[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};*/

	if (!b || !*b)
		return (0);
	i = 0;
	while (b[i] != '\0')
		i++;
	j = 1;
	k = 0;
	while (i > 0)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);
		if (k == 0)
		{
			num += (b[i - 1] - '0') * j;
			k = 2;
			i--;
		} else
		{
			num += (b[i - 1] - '0') * k;
			k *= 2;
			i--;
		}
	}

	return (num);
}


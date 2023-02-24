#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that prints sum of even numbers
 * between 0 and 4000000
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i = 0;
	long j = 1, k = 2, l;

	while (i < 4000000)
	{
		k += j;
		j = k - j;
		if (k % 2 == 0)
		{
			l += k;
		}

		++i;
	}
	printf(", %ld", l);

	printf("\n");

	return (0);
}

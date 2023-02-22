#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that prints first 50 fibonacci numbers
 * fibonacci starts from 0,1 and followed by adding the last two
 * numbers in the sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}

		++i;
	}

	printf("\n");

	return (0);
}

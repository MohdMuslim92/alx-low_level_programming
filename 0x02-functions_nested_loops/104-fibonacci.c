#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that prints first 98 fibonacci numbers
 * fibonacci starts from 0,1 and followed by adding the last two
 * numbers in the sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, m = 3;

	long double j = 1, k = 2;

	while (i < 1000)
	{
		if (i == 0)
			printf("%.0Lf", j);
		else if (i == 1)
			printf(", %.0Lf", k);
		else
		{
			k += j;
			j = k - j;
			if (m < 99)
			{
				printf(", %.0Lf", k);
			}
			m++;
		}

		++i;
	}
	printf("\n");

	return (0);
}

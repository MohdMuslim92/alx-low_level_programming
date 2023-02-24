#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Entry point
 * Description: a program that calculate the prime factor
 * for the number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{

		long i = 612852475143;
		double sqri = sqrt(i);
		long factors, j;

		for (j = 1; j <= sqri; j++)
		{

		if (i % j == 0)
		{
			factors = i / j;
		}
		}
		printf("%ld\n", factors);
		return (0);

}


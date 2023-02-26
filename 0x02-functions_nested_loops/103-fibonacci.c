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
	unsigned long i = 0, j = 1, sum;
	float total;

	while (1)
	{
		sum = i + j;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total += sum;

		i = j;
		j = sum;
	}
	printf("%.0f\n", total);

	return (0);
}

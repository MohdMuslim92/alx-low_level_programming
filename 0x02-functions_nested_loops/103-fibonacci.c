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
	int i = 0;
	long long j = 0;

	while (i < 4000000)
	{
		if (i % 2 == 0)
		{
			j += i;
		}

		i++;
	}
			printf("%lld", j);

	printf("\n");

	return (0);
}

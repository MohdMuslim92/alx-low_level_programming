#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that calculate the sum of 3,5 multiples
 * that below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}

	printf("%d\n", j);
	return (0);
}

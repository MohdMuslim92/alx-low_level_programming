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
	int i, j, k, l, m, n;

	j = 1024;
	k = 0;
	l = 0;
	n = 0;

	for (i = 1; i < 1024; i++)
	{
		if (l < 1024)
		{
			k = 3 * i;
			l += k;
		}
		if (n < 1024)
		{
			m = 5 * i;
			n += m;
		}
	}
	printf("%d\n", n + l);
	return (0);
}

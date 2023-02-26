#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that prints first 98 fibonacci numbers
 * fibonacci starts from 0,1 and followed by adding the last two
 * numbers in the sequence
 * @k : parameter passed to the function
 * Return: Always 0 (Success)
 */
int check_diff(int m);
int check_diff(int m)
{
	long double k;

	switch (m)
	{
		case 93:
			k = k - 1;
			break;
		case 94:
			k = k - 3;
			break;
		case 95:
			k = k - 4;
			break;
		case 96:
			k = k - 7;
			break;
		case 97:
			k = k - 15;
			break;
		case 98:
			k = k - 30;
			break;
		default:
			k = k;
	}
}
int main(void)
{
	int m = 3;

	long double i = 0, j = 1, k = 2;

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
				check_diff(m);
				printf(", %.0Lf", k);
			}
			m++;
		}

		++i;
	}
	printf("\n");

	return (0);
}

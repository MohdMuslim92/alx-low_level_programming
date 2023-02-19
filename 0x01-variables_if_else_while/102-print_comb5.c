#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all possible different combinations of two two digits
 * but it's mirror is not allowed "ex. 00 01 --> 00 10"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n;

	for (m = 0; m <= 98; m++)
	{
		for (n = m + 1; n <= 99; n++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');

			if (m == 98 && n == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

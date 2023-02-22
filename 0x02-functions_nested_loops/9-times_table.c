#include "main.h"

/**
 * times_table - Entry point
 * times_table :print the nine times table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k > 9)
			{
				l = k % 10;
				m = (k - l) / 10;
				_putchar(' ');
				_putchar(m + '0');
				_putchar(l + '0');
			} else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			if (j <= 8)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}

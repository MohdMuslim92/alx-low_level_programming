#include "main.h"

/**
 * print_diagonal - Entry point
 * print_diagonal: using a function called print_diagonal to print
 * a diagonal line
 * @n : parameter passed to the function
 */
void print_diagonal(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i = 1;
		int j;

		while (i <= n)
		{
			for (j = 0; j <= i; j++)
			{
				if (j >1)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			i++;
			_putchar('\n');
		}

	}
}


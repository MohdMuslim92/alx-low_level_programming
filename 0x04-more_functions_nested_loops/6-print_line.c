#include "main.h"

/**
 * print_line - Entry point
 * print_line: using a function called print_line to print
 * a straight line
 * @n : parameter passed to the function
 */
void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');

	}
}


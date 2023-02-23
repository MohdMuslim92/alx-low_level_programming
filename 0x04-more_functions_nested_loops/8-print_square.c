#include "main.h"

/**
 * print_square - Entry point
 * print_square: using a function called print_square to print
 * a line of squares (#)
 * @size : parameter passed to the function
 */
void print_square(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i = 1;
		int j;

		while (i <= size)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
			i++;
		}

	}
}


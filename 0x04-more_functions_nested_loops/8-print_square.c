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

		while (i <= size)
		{
			_putchar(35);
			i++;
		}
		_putchar('\n');

	}
}


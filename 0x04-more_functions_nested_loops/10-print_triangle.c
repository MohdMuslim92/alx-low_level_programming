#include "main.h"

/**
 * print_triangle - Entry point
 * print_triangle: using a function called print_triangle to print
 * a triangle
 * @size : parameter passed to the function
 */
void print_triangle(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;
		int j;
		int m = size;

		while (size--)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar(' ');
			}
			for (j = 1; j <=  m - size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}


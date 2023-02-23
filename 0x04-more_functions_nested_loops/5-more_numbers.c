#include "main.h"

/**
 * more_numbers - Entry point
 * more_numbers: using a function called more_numbers to print
 * numbers from 0 to 14 ten times without using standard output functions
 * _putcha() : function which is declared in the header main.h
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}


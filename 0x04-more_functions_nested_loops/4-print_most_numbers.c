#include "main.h"

/**
 * print_most_numbers - Entry point
 * print_most_numbers: using a function called print_most_numbers to print
 * numbers from 0 to 9 except 2 and 4 without using standard output functions
 * _putcha() function which is declared in the header main.h
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}


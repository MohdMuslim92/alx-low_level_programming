#include "main.h"

/**
 * print_numbers - Entry point
 * print_numbers: using a function called print_numbers to print
 * numbers from 0 to 9 without using standard output functions
 * _putcha() function which is declared in the header main.h
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}


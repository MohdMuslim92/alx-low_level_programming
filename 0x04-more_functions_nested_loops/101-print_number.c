#include "main.h"

/**
 * print_number - Entry point
 * print_number: using a function called print_number to print
 * numbers negative or positive without usin standard output functions
 * @n : parameter passed to the function
 */
void print_number(int n)
{

	if (n < -9 && n > -100)
	{
		int m = -n;

		_putchar('-');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
	} else if (n > 9 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	} else if (n > 99 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 10) + '0');
	} else if (n > 999 && n < 10000)
	{
		_putchar((n / 1000) + '0');
		_putchar((n / 100) + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 10) + '0');
	} else
	{
		_putchar(n + '0');
	}


}


#include "main.h"

/**
 * print_positive - Entry point
 * print_positive: using a function called print_positive to print
 * positive numbers without usin standard output functions
 * print_number: starting function
 * print_number: using a function called print_number to print
 * negative numbers without usin standard output functions
 * @n : parameter passed to the function
 */
void print_positive(int n)
{
	if (n > 9 && n < 100)
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
		_putchar((n / 100) % 10 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 10) + '0');
	} else
	{
		_putchar(n + '0');
	}
}

void print_number(int n)
{
	print_positive(n);

	if (n < 0)
	{
		int x = -n;
		if (x > 9 && x < 100)
		{
			_putchar('\n');
			_putchar('-');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
		} else if (x > 99 && x < 1000)
		{
			_putchar('-');
			_putchar((x / 100) + '0');
			_putchar((x % 100) / 10 + '0');
			_putchar((x % 10) + '0');
		} else if (x > 999 && x < 10000)
		{
			_putchar('-');
			_putchar((x / 1000) + '0');
			_putchar((x / 100) % 10 + '0');
			_putchar((x % 100) / 10 + '0');
			_putchar((x % 10) + '0');
		} else
		{
			_putchar('-');
			_putchar(x + '0');
		}
	}


}


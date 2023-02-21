#include "main.h"

/**
 * print_last_digit - Entry point
 * print_last_digit : return the last digit of a variable
 * @n : parameter passed to the function
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int value;

	value = n % 10;
	if (value < 0)
	{
		value = value * -1;
	}
	_putchar(value + '0');
	return (value);
}

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
	int result;

	value = (int)(n) + 0;
	result = value % 10;
	if (value < 0)
	{
		result = value * -1 % 10;
	}
	_putchar(result + 0);
	return (result);

	return (0);
}

#include "main.h"

/**
 * _abs - Entry point
 * _abs : return the absolute value of a variable 1
 * @int : parameter passed to the function
 * Return: Always 0 (Success)
 */
int _abs(int n)
{

	if (n < 0)
	{
		_putchar(-n);
	} else
	{
		_putchar(n);
	}

	return (0);
}

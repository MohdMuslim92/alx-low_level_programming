#include "main.h"

/**
 * _pow_recursion - x powered by y function
 * Description: a function that returns the value
 * of x raised to the power of y
 * @x: number passed to the function
 * @y: the power of the number passed to the function
 * @: returned the number raised to the power y
 * Return: the number after calculation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	y--;
	return (x * _pow_recursion(x, y));
}


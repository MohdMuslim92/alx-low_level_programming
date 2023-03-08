#include "main.h"

/**
 * check - check function
 * Description: check in the number can be devided
 * by other number or not
 * @n: number to be checked
 * @i: numbers less than n to check if it can be
 * devided by it or not
 * @: returnd number indicating the number type
 * Return: 1 if the number is a prine or otherwise 0
*/
int check(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
		return (check(n, i + 1));
		return (-1);
}
/**
 * _sqrt_recursion - natural square root function
 * Description: a function that returns the natural
 * square root of a given number
 * @n: number passed to the function
 * @: natural square root
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
		return (check(n, 2));
}


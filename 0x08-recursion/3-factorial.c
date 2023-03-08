#include "main.h"

/**
 * factorial - factorial calculationn function
 * Description: a function that calculate the
 * factorial of a given number
 * @n: number passed to the function
 * @: returned the factorial of the passed number
 * Return: the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}


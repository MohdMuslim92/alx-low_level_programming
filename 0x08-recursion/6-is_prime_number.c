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
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
		return (0);
	else
		return (check(n, i + 1));
}

/**
 * is_prime_number - prine number function
 * Description: a function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: number passed to the function
 * @: returned number indicating the number type
 * Return: 1 for prime number and otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check(n, 2));
}


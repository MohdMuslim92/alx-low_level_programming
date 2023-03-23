#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum function
 * DESCRIPTION: a function that returns the sum of
 * all its parameters
 * @n: first parameter
 * @: the result
 * Return: the result of the addition
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	va_start(list, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - sum function
 * DESCRIPTION: a function that returns the sum of
 * all its parameters
 * @separator: a pointer for a string to be printed
 * between numbers
 * @n: number of parameters passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	if (n == 0)
		exit(0);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (*separator && i != n - 1)
		{
			printf("%c", *separator);
		}
	}
	printf("\n");
	va_end(list);
}

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 *fun_char - print function
 * DESCRIPTION: a function that prints a character
 * @seprator: string printed between arguments
 * @args: list of type of arguments passed to the function
 */
void fun_char(char *seprator, va_list args)
{
	printf("%s%c", seprator, va_arg(args, int));
}
/**
 *fun_int - print function
 * DESCRIPTION: a function that prints an integer
 * @seprator: string printed between arguments
 * @args: list of type of arguments passed to the function
 */
void fun_int(char *seprator, va_list args)
{
	printf("%s%i", seprator, va_arg(args, int));
}
/**
 *fun_float - print function
 * DESCRIPTION: a function that prints a float
 * @seprator: string printed between arguments
 * @args: list of type of arguments passed to the function
 */
void fun_float(char *seprator, va_list args)
{
	printf("%s%f", seprator, va_arg(args, double));
}
/**
 *fun_string - print function
 * DESCRIPTION: a function that prints a string
 * @seprator: string printed between arguments
 * @args: list of type of arguments passed to the function
 */
void fun_string(char *seprator, va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("%s%s", seprator, "(nil)");
		return;
	}
	printf("%s%s", seprator, str);
}
/**
 *print_all - print function
 * DESCRIPTION: a function that prints anything
 * @format: list of type of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	f_dt format_type[] = {
	{ "c", fun_char },
	{ "i", fun_int },
	{ "f", fun_float },
	{ "s", fun_string }
	};
	va_list args;
	unsigned int i = 0, j = 0;
	char *seprator = "";

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *format_type[j].identifier)
			{
				format_type[j].f(seprator, args);
				seprator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

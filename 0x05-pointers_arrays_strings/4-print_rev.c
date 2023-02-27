#include "main.h"

/**
 * print_rev - output function
 * Description: using a function print_rev to print a string
 * that passed to the function in reverse using _putchar function
 * declared in main.h and _putchr.c
 * @s: string passed to the function
 * Return: return the string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}


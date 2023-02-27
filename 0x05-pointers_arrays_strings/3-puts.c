#include "main.h"

/**
 * _puts - output function
 * Description: using a function _puts to print a string
 * that passed to the function using _putchar function
 * declared in main.h and _putchr.c
 * @str: string passed to the function
 * Return: return the string
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


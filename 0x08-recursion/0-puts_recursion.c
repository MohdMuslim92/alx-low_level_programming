#include "main.h"

/**
 * _puts_recursion - string print function
 * Description: a function that print the passed
 * string recursivly using _putchar function
 * declared in _putchar.c file
 * @s: string passed to the function
 * Return: return nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);

}


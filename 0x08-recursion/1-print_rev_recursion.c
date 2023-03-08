#include "main.h"

/**
 * _print_rev_recursion - string reverse function
 * Description: a function that reverse the passed
 * string recursivly and print it using _putchar
 * function declared in _putchar.c file
 * @s: string passed to the function
 * Return: return nothing
 */
void _print(char *s);

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}


#include "main.h"

/**
 * puts2 - output function
 * Description: using a function puts2 to print every other
 * character in a string passed to the function using _putchar
 * function declared in main.h and _putchr.c
 * @str: string passed to the function
 * Return: return the string
 */
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}


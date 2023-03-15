#include "main.h"

/**
 * puts_half - output function
 * Description: using a function puts_half to print the
 * half of a string that passed to the function using
 * _putchar function declared in main.h and _putchr.c
 * @str: string passed to the function
 * Return: return the string
 */
void puts_half(char *str)
{
	int i = 0, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
	} else
	{
		j = (i + 1) / 2;
	}
	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

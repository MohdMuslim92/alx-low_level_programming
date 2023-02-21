#include "main.h"

/**
 * print_alphabet - Entry point
 * print_alphabet: using a function called print_alphabet to print
 * the alphabet letters with the help of function _putchar
 * which is declared in the header main.h
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}


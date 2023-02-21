#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * print_alphabet_x10: using a function called print_alphabet to print
 * the alphabet letters with the help of function _putchar
 * which is declared in the header main.h
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}


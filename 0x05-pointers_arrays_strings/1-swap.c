#include "main.h"

/**
 * swap_int - Entry point
 * Description: using a function called swap_int to
 * swap two variables' values
 * @a: first variable
 * @b: second variable
 * Return: the two variables after been swaped
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}


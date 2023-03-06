#include "main.h"

/**
 * print_chessboard - chessboard print function
 * Description: a function that prints the chessboard
 * with putchar function declared in _putchar.c
 * @a: 2D array passed to the function
 * Return: return nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}

}


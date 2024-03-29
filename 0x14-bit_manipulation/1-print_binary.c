#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_binary - convert function
 * DESCRIPTION: a function that converts a decimal
 * number to a binary
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;
	int i, flag = 0;

	for (i = 0; i < 64; i++)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		} else
		{
			if (flag)
			{
				_putchar('0');
			}
		}
		mask >>= 1;
	}
	if (!flag)
	{
		_putchar('0');
	}
}


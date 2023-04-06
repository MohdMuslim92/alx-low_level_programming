#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_binary - convert function
 * DESCRIPTION: a function that convertsa decimal
 * number to a binary
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 1 << 31;
	int i, flag = 0;

	for (i = 0; i < 32; i++)
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
		n <<= 1;
	}
		if (!flag)
		{
			_putchar('0');
		}
}

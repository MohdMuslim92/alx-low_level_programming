#include <stdlib.h>
#include "main.h"
/**
 * get_bit - print function
 * DESCRIPTION: a function that returns the value
 * of a bit at a given index
 * @n: the decimal number
 * @index: the bit index to be printed
 * Return: the bit at given index or -1 if an error found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int bit;

	if (index < sizeof(n) * 8)
	{
		for (i = 0; i <= index; i++)
		{
			if (index == i)
			{
				if (n % 2 == 1)
				{
					bit = 1;
				} else
				{
					bit = 0;
				}
				return (bit);
			}
			n >>= 1;
		}
	}
	return (-1);
}

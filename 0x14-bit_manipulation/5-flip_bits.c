#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - check function
 * DESCRIPTION: a function that returns the number
 * of bits you would need to flip to get from one number to another
 * @n: decimal number represent the desired result
 * @m: the number that we want it to be equal to m
 * Return: the number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int i;
	int count = 0;

	for (i = 0; i < 64; i++)
	{
		mask = 1UL << i;
		if ((n & mask) != (m & mask))
			count++;
	}
	return (count);
}

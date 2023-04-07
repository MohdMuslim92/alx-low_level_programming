#include <stdlib.h>
#include "main.h"
/**
 * get_endianness - check function
 * DESCRIPTION: a function that checks the endianness
 * Return: 0 if it's big endian or 1 if it's small endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ptr = (char *)&n;

	if (!*ptr)
	{
		n = 0;
	}
	return (n);
}

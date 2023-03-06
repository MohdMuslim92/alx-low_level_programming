#include "main.h"

/**
 * _memset - memory manipulate function
 * Description: a function function fills the first n bytes
 * of the memory area pointed to by s with the constant byte b
 * @s: pointer to the bytes passed to the function
 * @b: constant byte passed to the function (will
 * @n: bytes in the memory to be filled
 * Return: return a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *ptr = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}

	return (ptr);
}


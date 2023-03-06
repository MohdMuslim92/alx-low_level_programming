#include "main.h"

/**
 * _memcpy - memory copy function
 * Description: a function that copy the a memory area bytes
 * to another memory area
 * @dest: memory area bytes passed to the function to be copied at
 * @src: memory area bytes passed to the function to be copy from
 * @n: bytes size in the memory to be copied
 * Return: return a pointer to the dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *ptr = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	
	return (ptr);
}


#include "main.h"

/**
 * _strncpy - copy function
 * Description: a function copy a string into another one
 * @dest: first string passed to the function
 * @src: second string passed to the function (will
 * be copied to the first string)
 * @n: number of characters to be copied
 * Return: return concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}


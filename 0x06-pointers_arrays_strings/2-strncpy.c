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
	int i = 0, j = 0;

	while (j >= 0 && j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0' || *(src + j) == n)
			break;
		i++;
		j++;
	}

	return (dest);
}


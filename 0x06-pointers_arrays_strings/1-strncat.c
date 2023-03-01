#include "main.h"

/**
 * _strncat - concatenating function
 * Description: a function recieves 2 strings and
 * concatenates the passed number of characters
 * from string 2 to string 1
 * @dest: first string passed to the function
 * @src: second string passed to the function (will
 * @n: number of characters to be concatenated
 * Return: return concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0 && j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}


#include "main.h"

/**
 * _strcat - concatenating function
 * Description: a function recieves 2 strings and
 * concatenates them and return one string
 * @dest: first string passed to the function
 * @src: second string passed to the function (will
 * be added to the first string)
 * Return: return concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}

	return (dest);
}

#include "main.h"

/**
 * _strcpy - copy function
 * Description: using a function _strcpy to copy
 * passed array 2 into the first one
 * @dest: address of first empty array passed
 * @src: address of second array to be copied
 * Return: return the address of first array
 */
char *_strcpy(char *dest, char *src)
{
	int i, j, k;

	for (j = 0; src[j] != '\0'; j++)
	{
		;
	}
	k = j + 1;
	while (i < k)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


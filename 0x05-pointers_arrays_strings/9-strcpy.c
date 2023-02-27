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
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


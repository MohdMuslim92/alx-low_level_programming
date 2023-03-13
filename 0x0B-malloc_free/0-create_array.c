#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of characters
 * @size: The number of bytes to be reserved
 * @c: The character passed to the function
 * @: pointer returned to the array
 * Return: a pointer to the array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *) malloc(size * sizeof(c));
	if (size == 0)
	{
		return (NULL);
	}
	if (arr == NULL)
		return (NULL);
		else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}


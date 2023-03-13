#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy a string in a memory location
 * Description: a function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: The string passed to the function to be copied
 * @: pointer returned to the copied string
 * Return: a pointer to the string or NULL if fails
 */
char *_strdup(char *str)
{
	char *arr;
	int i = 0;

	arr = (char *) malloc(sizeof(str));
	if (str[0] == '\0')
	{
		return (NULL);
	}
	if (arr == NULL)
		return (NULL);
		else
	{
		while (str[i] != '\0')
		{
			arr[i] = str[i];
			i++;
		}
		arr[i] = '\0';
		return (arr);
	}
}


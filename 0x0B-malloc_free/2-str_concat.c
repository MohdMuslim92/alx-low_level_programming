#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * Description: a function that concatenates two
 * strings and allocate the concatenated string
 * in the memory
 * @s1: first string passed to the function
 * @s2: second string passed to the function
 * @: pointer for the concatenated string
 * Return: a pointer to the concatenated string
 * or NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	arr = (char *) malloc((i + j + 1) * sizeof(char));
	i = 0;
	j = 0;
	if (arr != NULL)
	{
		while (s1[i] != '\0')
		{
			arr[i] = s1[i];
			i++;
		}
		k = i;
		while (s2[j] != '\0')
		{
			arr[k] = s2[j];
			j++;
			k++;
		}
	} else
	{
		return (NULL);
	}
	return (arr);

}


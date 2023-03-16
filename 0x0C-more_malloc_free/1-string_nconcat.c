#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings
 * Description: a function that concatenates two
 * strings and allocate the concatenated string
 * in the memory
 * @s1: first string passed to the function
 * @s2: second string passed to the function
 * @n: number of characters from s2 tobe concatenated
 * @: pointer for the concatenated string
 * Return: a pointer to the concatenated string
 * or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n >= j)
		n = j + 1;
	arr = (char *) malloc((i + n + 1) * sizeof(char));
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
		while (s2[j] != '\0' && j <= n)
		{
			arr[k] = s2[j];
			j++;
			k++;
		}
	} else
	{
		return (NULL);
	}
	arr[k] = '\0';
	return (arr);

}


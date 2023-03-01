#include "main.h"

/**
 * _strcmp - comparing function
 * Description: a function recieves 2 strings, compare
 * them and return a number indicates the diiference
 * @s1: first string passed to the function
 * @s2: second string passed to the function
 * Return: return an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	for (k = 0; k < i; k++)
	{
		if (*(s1 + k) != *(s2 + k))
		{
			k = (*(s1 + k) - *(s2 + k));
			break;
		}
		if (*(s1 + k) == *(s2 + k))
		{
			k = 0;
			break;
		}
	}

	return (k);
}


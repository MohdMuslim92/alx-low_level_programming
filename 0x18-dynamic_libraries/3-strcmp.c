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
	int i = 0, j = 0;

	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (j);
}


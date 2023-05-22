#include "main.h"

/**
 * _strspn - length of a prefix substring function
 * Description: a function that gets the length of a prefix
 * substring and returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 * @s: string passed to the function
 * @accept: character passed to the function
 * Return: return the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, bytes = 0, stop;

	while (s[i] != '\0')
	{
		stop = bytes;
		for (j = 0; j < s[i]; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
			}
		}
		if (stop == bytes)
			break;
		i++;
	}

	return (bytes);
}


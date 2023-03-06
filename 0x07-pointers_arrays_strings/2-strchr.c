#include "main.h"

/**
 * _strchr - locate character function
 * Description: a function that locate a character in a string
 * and returns a pointer to the first occurrence of the character
 * or NULL if the character is not found
 * @s: string passed to the function
 * @c: character passed to the function
 * Return: return a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}

	return (0);
}


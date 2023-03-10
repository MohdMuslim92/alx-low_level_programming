#include "main.h"

/**
 * _isalpha - Entry point
 * _isalpha:check the value if it's alphabet letter
 * @c : parameter passed to the function
 * Return: Always 1 (alphabet)
 */
int _isalpha(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if
		(c >= 97 && c <= 122)
		{
			return (1);
		}

	return (0);
}

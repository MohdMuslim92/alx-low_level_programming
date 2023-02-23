#include "main.h"

/**
 * _isupper - Entry point
 * _isupper:check the character if it's upper case or not
 * @c : parameter passed to the function
 * Return: Always 1 (upper case)
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}

		return (0);
}

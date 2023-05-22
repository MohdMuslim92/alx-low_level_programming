#include "main.h"

/**
 * _isdigit - Entry point
 * _isdigit:check the value if it's number between 0 and 9 or not
 * @c : parameter passed to the function
 * Return: Always 1 (number between 0 and 9)
 */
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}

		return (0);
}

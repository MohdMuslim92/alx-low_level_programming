#include "main.h"

/**
 * _islower - Entry point
 * _islower:check the character if it's lower or upper case
 * @c : parameter passed to the function
 * Return: Always 1 (lower case)
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return(1);
	}

		return(0);
}

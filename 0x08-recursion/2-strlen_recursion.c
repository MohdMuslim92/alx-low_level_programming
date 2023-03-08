#include "main.h"

/**
 * _strlen_recursion - string lecgth calculate function
 * Description: a function that count the length of
 * a string passed to it
 * @s: string passed to the function
 * @: returned length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	return (_strlen_recursion(s + 1));
	return (0);
}


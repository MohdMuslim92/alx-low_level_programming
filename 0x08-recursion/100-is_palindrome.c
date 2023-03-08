#include "main.h"

/**
 * str_len - length of a string function
 * @s: string passed to the function
 * Return: length of the string
 */
int str_len(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + str_len(s + 1));
	}
	return (0);
}

/**
 * check - check function
 * Description: check if the string if a palindrome
 * or not starting comparing the beginning and the
 * end of the string
 * @s: string passed to the function
 * @len: length of the string
 * @start: starting of first half of the string
 * @: returnd number indicating the string type
 * Return: 1 if the string is a palindrome or otherwise 0
*/
int check(char *s, int len, int start)
{
	if (start >= len)
	{
		return (1);
	}
	if (s[start] == s[len])
	{
		return (check(s, len - 1, start + 1));
	}
	return (0);
}

/**
 * is_palindrome - check string function
 * Description: a function that will call
 * the check and str_len function to decide
 * if the string is palindrome or not
 * @s: string passed to the function
 * @: number indicating the string type
 * Return: 1 if sting is palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	int len = str_len(s);
	int start = 0;

	return (check(s, len - 1, start));

}


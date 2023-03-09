#include "main.h"

/**
 * check - check function
 * Description: check if the string1 equal
 * to the string2
 * @s1: string passed to the function
 * @s2: string passed to the function
 * @i: counter
 * @j: counter
 * @: returnd number indicating the string type
 * Return: 1 if the string is identical or otherwise 0
*/
int check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (check(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (check(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (check(s1, s2, i + 1, j) || check(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - compare string function
 * Description: a function that compares two strings and
 * returns 1 if the strings can be considered identical,
 * otherwise return 0
 * @s1: string passed to the function
 * @s2: string passed to the function
 * @: number indicating the string status
 * Return: 1 if sting is identical otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	return (check(s1, s2, 0, 0));
}

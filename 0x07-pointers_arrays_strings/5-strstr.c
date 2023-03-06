#include "main.h"

/**
 * _strstr - search substring function
 * Description: a function that locates a substring and when finds
 * the first occurrence of the substring in another string it returns
 * a pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 * @haystack: string passed to the function to search in
 * @needle: substring passed to the function to search
 * Return: return a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *temp1 = haystack;
		char *temp2 = needle;

		while (*temp1 == *temp2 && *temp2 != '\0')
		{
			temp1++;
			temp2++;
		}

		if (*temp2 == '\0')
			return (haystack);
	}

	return (0);
}


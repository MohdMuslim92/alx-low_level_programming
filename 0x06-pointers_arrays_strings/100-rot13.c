#include "main.h"

/**
*  rot13 - incoding function
 * Description: a functi0n that encode a string by adding
 * 13 character for every letter
 * @str: string passed to the function
 * Return: return an encoded string
 */
char *rot13(char *str)
{
	int i = 0, ai;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + i) != '\0')
	{
		for (ai = 0; ai < 52; ai++)
		{
			if ((*(str + i) == a[ai]))
			{
				*(str + i) = b[ai];
				break;
			}
		}
		i++;
	}

	return (str);
}


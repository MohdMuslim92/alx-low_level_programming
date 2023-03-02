#include "main.h"

/**
 * leet - 3ncoding function
 * Description: a functi0n th4t 3ncoding a s7ring
 * 1nto leet code (1337)
 * @str: string passed to the function
 * Return: return an encoded string
 */
char *leet(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ((*(str + i) == 'a') || (*(str + i) == 'A'))
		{
			*(str + i) = '4';
		} else if ((*(str + i) == 'e') || (*(str + i) == 'E'))
		{
			*(str + i) = '3';
		} else if ((*(str + i) == 'l') || (*(str + i) == 'L'))
		{
			*(str + i) = '1';
		} else if ((*(str + i) == 'o') || (*(str + i) == 'O'))
		{
			*(str + i) = '0';
		} else if ((*(str + i) == 't') || (*(str + i) == 'T'))
		{
			*(str + i) = '7';
		}
		i++;
	}
	return (str);
}


#include "main.h"

/**
 * string_toupper - lower to upper function
 * Description: a function to convert all lowercase
 * characters in a string to uppercase
 * @str: string passed to the function
 * Return: return Upercase string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 97) && (*(str + i) <= 122))
			*(str + i) = *(str + i) - 32;
		i++;
	}
	return (str);
}


#include "main.h"

/**
 * _atoi - convert function
 * Description: using a function _atoi to convert
 * a string to integer
 * @s: string passed to the function
 * Return: return number
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int sum = 0;
	int total = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			break;
	}
	while (*s >= '0' && *s <= '9')
	{
		sum *= 10;
		sum += *s - '0';
		s++;
	}

	if (sign == -1)
		total = -sum;
	else
		total = sum;

	return (total);
}


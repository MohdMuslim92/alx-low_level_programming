#include "main.h"

/**
 * rev_string - reverse function
 * Description: using a function rev_string to reverse the
 * passed string
 * @s: string passed to the function
 * Return: return reversed string
 */
void rev_string(char *s)
{
	int i = 0;
	int j, k, temp, length;

	while (s[i] != '\0')
	{
		i++;
	}
	length = i;
	k = 0;
	j = length - 1;
	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}


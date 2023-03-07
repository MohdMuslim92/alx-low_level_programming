#include <stdio.h>
#include "main.h"

/**
 * set_string - change pointer function
 * Description: a function that sets the value of a pointer to a char
 * @s: string passed to the function
 * @to: string passed to the function
 * Return: return 0 (success)
 */
void set_string(char **s, char *to)
{
	*s = to;
}

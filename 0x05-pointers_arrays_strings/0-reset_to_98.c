#include "main.h"

/**
 * reset_to_98 - Entry point
 * Description: using a function called reset_to_98 update
 * the value of passed variable to 98
 * @n: the value needs to be changed
 * Return: Always the value after changed
 */
void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;
}


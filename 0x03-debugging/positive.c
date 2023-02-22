#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description: print negative,positive or zero according to
 * the generating number by rand
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{

	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}

}

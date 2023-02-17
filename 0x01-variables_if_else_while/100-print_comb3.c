#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all possible different combinations of two digits
 * but it's mirror is not allowed "ex. 01 --> 10"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = '0'; n <= '8'; n++)
	{
		for (m = '1'; m <= '9'; m++)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (n != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all possible different combinations of three digits
 * no repeating allowed
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, o;

	for (n = '0'; n <= '7'; n++)
	{
		for (m = '1'; m <= '8'; m++)
		{
			for (o = '2'; o <= '9'; o++)
			{
				if (n < m && m < o)
				{
				putchar(n);
				putchar(m);
				putchar(o);
				if (n != '7')
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

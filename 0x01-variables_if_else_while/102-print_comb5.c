#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all possible different combinations of two two digits
 * but it's mirror is not allowed "ex. 00 01 --> 00 10"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, o, p;

	for (n = '0'; n <= '9'; n++)
	{
	for (m = '0'; m <= '9'; m++)
	{
	for (o = '0'; o <= '9'; o++)
	{
	for (p = '0'; p <= '9'; p++)
	{
		if (n <= o && m < p)
		{
		putchar(n);
		putchar(m);
		putchar(' ');
		putchar(o);
		putchar(p);
		if (n != '9' || m != '8')
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

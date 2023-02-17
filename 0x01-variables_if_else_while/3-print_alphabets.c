#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all alphabet small and capital with a for loop
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}

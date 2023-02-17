#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all small alphabet with a for loop
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

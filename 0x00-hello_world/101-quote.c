#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 * Description: print a string without regular functions
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, msg, strlen(msg));
	return (1);
}

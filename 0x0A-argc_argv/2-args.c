#include <stdio.h>
#include "main.h"

/**
 * main - print arguments
 * Description: a program that prints all arguments it receives
 * @argc: number of command line arguments passed to the main
 * @argv: array of command line arguments passed to the main
 * Return: return 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

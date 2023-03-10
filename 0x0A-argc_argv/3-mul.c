#include <stdio.h>
#include <stdlib.h>
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
	int i, total = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			total *= atoi(argv[i]);
		}
		printf("%d\n", total);
	} else
	{
		printf("Error\n");
	}
	return (0);
}

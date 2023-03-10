#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - add numbers
 * Description: a program that adds positive numbers
 * @argc: number of command line arguments passed to the main
 * @argv: array of command line arguments passed to the main
 * Return: return 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, total = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);

	return (0);
}

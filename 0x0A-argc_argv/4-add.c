#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - add numbers
 * Description: a program that adds positive numbers
 * @argc: number of command line arguments passed to the main
 * @argv: array of command line arguments passed to the main
 * Return: return 0 (success)
 */
int main(int argc, char **argv)
{
	int i, j, total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%i\n", total);
	return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * error_check - check function
 * Description: a function checks if the arguments entered
 * is correct or not
 * @argc: number of command line arguments passed to the main
 * @argv: array of command line arguments passed to the main
 * Return: return 0 (success) or 1 for error
 */
int error_check(int argc, char **argv)
{
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
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
	}
	return (0);
}

/**
 * main - change to coins
 * Description: a program that prints the minimum number of
 * coins to make change for an amount of money
 * @argc: number of command line arguments passed to the main
 * @argv: array of command line arguments passed to the main
 * Return: return 0 (success)
 */
int main(int argc, char **argv)
{
	int num, count = 0;

	if (error_check(argc, argv) == 1)
	{
		return (1);
	}

	num = atoi(argv[1]);
	while (num / 25 >= 1)
	{
		num = num - 25;
		count++;
	}
	while (num / 10 >= 1)
	{
		num = num - 10;
		count++;
	}
	while (num / 5 >= 1)
	{
		num = num - 5;
		count++;
	}
	while (num / 2 >= 1)
	{
		num = num - 2;
		count++;
	}
	if (num == 1)
	{
		count++;
	}
	printf("%i\n", count);
	return (0);
}

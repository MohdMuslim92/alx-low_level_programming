#include "main.h"

/**
 * main - print number of arguments
 * Description: a program that prints the number of arguments
 * passed into it
 * @argc: number of command line arguments passed to the main
 * @argv: array of command line arguments passed to the main
 * Return: return 0 (success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	_putchar(argc + '0' - 1);
	_putchar('\n');
	return (0);
}


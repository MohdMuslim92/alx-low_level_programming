#include "3-calc.h"
#include <stdio.h>

/**
 * main - a simple calculator
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Description: a program recive 2 numbers seperated by an operator,
 * It performs the specified operation and prints the result to
 * standard output. If called with the wrong number of
 * arguments, it prints "Error" and terminates the process with a status of 98.
 * If the operator given is not one of '+', '-', '*', '/' or '%', it prints
 * "Error" with a status of 99. If the division or modulation by 0 it prints
 * "Error" with a status value of 100.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		puts("Error");
		exit(99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/**
 * main - Entry point
 * Description: a program that generate random
 * valid password for the program 101-crackme
 * Return: Always return 0 (success)
*/
int main(void)
{
	int sum = 0;
	char random;

	srand(time(0));

	while (sum <= 2646)
	{
		random = rand() % 128;
		write(1, &random, 1);
		sum += random;
	}

	random = 2772 - sum;
	write(1, &random, 1);
	return (0);
}

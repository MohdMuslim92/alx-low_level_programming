#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that prints numbers from 1 to 100 except :
 * - numbers divisible by 3 prints Fizz
 * - numbers divisible by 5 prints Buzz
 * - numbers divisible by both 3 and 5 prints FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{

		int i = 8;
		int factors;

		for (factors = 2; i > 1; factors++)
		{

		while (i % factors == 0)
		{
			printf("%d\t", factors);
			i = i / factors;
		}
		printf("\n");
		}
		return (0);

}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

		long i =612852475143;
		double sqri = sqrt(i);
		long factors, j;

		for (j = 1; j <= sqri; j++)
		{

		if (i % j == 0)
		{
			factors = i / j;
		}
		}
		printf("%ld\n", factors);
		return (0);

}


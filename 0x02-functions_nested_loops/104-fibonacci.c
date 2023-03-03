#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that prints first 98 fibonacci numbers
 * fibonacci starts from 0,1 and followed by adding the last two
 * numbers in the sequence
 * @k : parameter passed to the function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long f1, f2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	f1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	f2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = f1 + fib2_half1;
		half2 = f2 + fib2_half2;
		if (f2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		f1 = fib2_half1;
		f2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}

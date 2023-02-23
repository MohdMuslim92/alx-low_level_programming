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

		int i = 1;

		while (i <= 100)
		{
			if ((i % 3 == 0) && (i % 5 != 0))
			{
				printf("Fizz");
				if (i < 100)
				{
					printf(" ");
				}
			} else if ((i % 5 == 0) && (i % 3 != 0))
			{
				printf("Buzz");
				if (i < 100)
				{
					printf(" ");
				}
			} else if ((i % 5 == 0) && (i % 3 == 0))
			{
				printf("FizzBuzz");
				if (i < 100)
				{
					printf(" ");
				}
			} else
			{
				printf("%d ", i);
			}
			i++;
		}
		printf("\n");
		return (0);

}


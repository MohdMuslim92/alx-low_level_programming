#include "main.h"
/**
  * print_number - function prints a positive and negative numbers
  * @n: value passed to the function
  *
  * Return: Nothing!
  */
void print_number(int n)
{
unsigned int m, o, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	o = m;
	count = 1;

	while (o > 9)
	{
		o /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}

#include "main.h"
/**
  * print_number - function prints a positive and negative numbers
  * @n: value passed to the function
  *
  * Return: Nothing!
  */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		i = -n;
		_putchar(45);
	}

	i /= 10;

	if (i != 0)
		print_number(i);

	_putchar((unsigned int) n % 10 + '0');

}

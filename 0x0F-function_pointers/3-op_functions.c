#include "3-calc.h"
/**
 * op_add - add function
 * @a: first parameter
 * @b: second parameter
 * Return: the addition result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract function
 * @a: first parameter
 * @b: second parameter
 * Return: the substraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply function
 * @a: first parameter
 * @b: second parameter
 * Return: the multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide function
 * @a: first parameter
 * @b: second parameter
 * Return: the division result
 */
int op_div(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: first parameter
 * @b: second parameter
 * Return: the modulation result
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}

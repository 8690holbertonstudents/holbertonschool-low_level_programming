#include "3-calc.h"
/**
 * op_add - addition of 2 integers
 * @a: input int a value
 * @b: input int b value
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of 2 integers
 * @a: input int a value
 * @b: input int b value
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of 2 integers
 * @a: input int a value
 * @b: input int b value
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide of a by b
 * @a: input int a value
 * @b: input int b value
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}
/**
 * op_mod - return remainder of division a by b
 * @a: input int a value
 * @b: input int b value
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}

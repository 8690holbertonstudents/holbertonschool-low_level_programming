#include "main.h"
/**
 * factorial - return factorial of a number
 * @n: input int pointer from main
 * Return: return values to main
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}

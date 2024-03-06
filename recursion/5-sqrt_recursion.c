#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of number
 * @n: input int num from main
 * Return: return values to main
 */
int _sqrt_recursion(int n)
{
	return (_find_root(n, 1));
}

/**
 * _find_root - find root sqare number for sqrt
 * @n: input int num from _sqrt_recursion
 * @i: input int start value for compare to n
 * Return: return values to _sqrt_recursion
 */
int _find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_find_root(n, i + 1));
}

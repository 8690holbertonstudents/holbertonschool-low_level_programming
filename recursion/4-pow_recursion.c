#include "main.h"
/**
 * _pow_recursion - return x raised to the power of y
 * @x: input int num from main
 * @y: input "power" num from main
 * Return: return values to main
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}

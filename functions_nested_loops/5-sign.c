#include "main.h"
/**
 * print_sign - compare  0 + -
 * @n: input value from main
 * Return: return c value to main
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

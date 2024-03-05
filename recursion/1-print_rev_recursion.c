#include "main.h"
/**
 * _print_rev_recursion - function print a string in reverse
 * @s: input char pointer from main
 * Return: 0 no errors
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}

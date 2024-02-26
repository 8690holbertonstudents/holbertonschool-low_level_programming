#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * @void: input is nothing
 * Return: return c value to main
 */
void print_numbers(void)
{
	int i = 48;

	for (; i >= 57 ; i++)
		_putchar ('0' + i);
	_putchar ('\n');
}

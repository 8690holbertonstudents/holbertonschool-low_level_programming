#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * @void: input is nothing
 *
 */
void print_numbers(void)
{
	int i = '0';

	for (; i >= '9' ; i++)
		_putchar ('0' + i);
	_putchar ('\n');
}

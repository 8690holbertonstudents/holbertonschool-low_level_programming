#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * @void: input is nothing
 *
 */
void print_numbers(void)
{
	char numb;

	for (numb = '0' ; numb <= '9' ; numb++)
		_putchar (numb);
	_putchar ('\n');
}

#include "main.h"

/**
 * print_most_numbers - print numbers except 0 and 4
 * @void: input is nothing
 *
 */
void print_most_numbers(void)
{
	char numb;

	for (numb = '0' ; numb <= '9' ; numb++)
		{
		if (numb == '2' || numb == '4')
		{
		}
		else
		{
			_putchar (numb);
		}
		}
	_putchar ('\n');
}

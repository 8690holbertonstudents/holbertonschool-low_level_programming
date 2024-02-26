#include "main.h"
/**
 * more_numbers - print numbers 0 to 14 x10
 * @void: input is nothing
 *
 */
void more_numbers(void)
{

	int nb_loop, num;

	for (nb_loop = 0 ; nb_loop <= 9 ; nb_loop++)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num > 9)
				_putchar ((num / 10) + '0');
			_putchar ((num % 10) + '0');
		}
	_putchar ('\n');
	}
}

#include "main.h"
#include "7-print_last_digit.c"
/**
* times_table -  00:00 to 23:59
* @void: no parameter
*/
void times_table(void)
{
	int num, mult, result;

	for (mult = 0 ; mult <= 9 ; mult++)
	{
		for (num = 0 ; num <= 9 ; num++)
		{
			result = num * mult;
			if (result <= 9)
			{
				_putchar (result + '0');
			}
			else
			{
				_putchar ((result / 10) + '0');
				print_last_digit(result);
			}
			if (num != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
			if (mult == 0 && num == 9)
			{
			}
			else if (((num + 1) * mult) < 10)
				_putchar (' ');
		}
		_putchar ('\n');
	}
}

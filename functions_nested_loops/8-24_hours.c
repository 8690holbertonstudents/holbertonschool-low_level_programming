#include "main.h"
/**
* jack_bauer -  00:00 to 23:59
* @void: no parameter
* Return: return value to main
*/
void jack_bauer(void)
{
	int h1, m1;

	h1 = m1 = 0;

	while (h1 <= 23)
	{
		while (m1 <= 59)
		{
		_putchar ((h1 / 10) + '0');
		_putchar ('0' + (h1 % 10));
		_putchar (':');
		_putchar ((m1 / 10) + '0');
		_putchar ('0' + (m1 % 10));
		_putchar ('\n');
		m1++;
		}
	h1++;
	m1 = 0;
	}
}

#include "main.h"
/**
 * print_alphabet_x10 - use _putchar
 * Return: not needed
 */
void print_alphabet_x10(void)
{
	char alphab = 'a';
	int i = 1;

	for (; i <= 10 ; i++)
	{
		for (; alphab <= 'z'; alphab++)
			_putchar (alphab);
		_putchar ('\n');
	}
}

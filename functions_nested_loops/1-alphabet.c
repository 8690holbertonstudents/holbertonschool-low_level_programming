#include "main.h"
/**
 * print_alphabet - use _putchar
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphab = 'a';

	for (; alphab <= 'z'; alphab++)
		_putchar (alphab);
	_putchar ('\n');
}

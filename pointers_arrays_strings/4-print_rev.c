#include "main.h"
/**
 * print_rev - use pointer
 * @s: input pointer from main
 *
 */
void print_rev(char *s)
{
	int mypos = 0;
	int lasti = 0;

	while (s[mypos] != '\0')
	{
		mypos++;
		lasti++;
	}
	while (lasti >= 0)
	{
		_putchar (s[lasti]);
		lasti--;
	}
	_putchar ('\n');
}

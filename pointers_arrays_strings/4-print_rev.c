#include "main.h"
/**
 * print_rev - use pointer
 * @s: input pointer from main
 *
 */
void print_rev(char *s)
{
	int mypos = 0;

	while (s[mypos] != '\0')
	{
		mypos++;
	}
	mypos--;
	while (mypos >= 0)
	{
		_putchar (s[mypos]);
		mypos--;
	}
	_putchar ('\n');
}

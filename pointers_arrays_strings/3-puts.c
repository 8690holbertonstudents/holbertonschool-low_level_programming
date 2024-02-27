#include "main.h"
/**
 * _puts - use pointer to write text
 * @str: input pointer from main
 *
 */
void _puts(char *str)
{
	int mytxt;

	for (mytxt = 0 ; str[mytxt] != '\0' ; mytxt++)
	{
		_putchar (str[mytxt]);
	}
	_putchar ('\n');
}

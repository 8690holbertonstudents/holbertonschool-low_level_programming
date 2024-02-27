#include "main.h"
/**
 * puts2 - use pointer
 * @str: input pointer from main
 *
 */
void puts2(char *str)
{
	int i_pos;

	for (i_pos = 0 ; str[i_pos] != '\0' ; i_pos++)
		if ((str[i_pos] % 2) == 0)
			_putchar (str[i_pos]);
	_putchar ('\n');
}

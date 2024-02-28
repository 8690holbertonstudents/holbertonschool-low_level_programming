#include "main.h"
/**
 * puts_half - use pointer
 * @str: input pointer from main
 *
 */
void puts_half(char *str)
{
	int i_pos = 0;
	int j_pos = 0;

	while (str[i_pos] != '\0')
	{
		i_pos++;
	}
	j_pos = (i_pos / 2);
	while (j_pos <= i_pos)
	{
		_putchar (str[j_pos]);
		j_pos++;
	}
	_putchar ('\n');
}

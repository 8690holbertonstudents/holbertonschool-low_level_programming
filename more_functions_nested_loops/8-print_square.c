#include "main.h"
/**
 * print_square - print square
 * @size: input from main
 *
 */
void print_square(int size)
{
	int width, height;

	for (height = 0 ; height < size ; height++)
	{
		for (width = 0 ; width < size ; width++)
		{
		if (size > 0)
			{
			 _putchar ('#');
			}
		else
			{
			_putchar ('\n');
			}
		}
	_putchar ('\n');
	}
}


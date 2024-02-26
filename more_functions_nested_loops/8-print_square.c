#include "main.h"
/**
 * print_square - print square
 * @size: input from main
 *
 */
 void print_square(int size)
{
	int width, height;

	for (height = 0 ; height < size && size >=0 ; height++)
	{
		for (width = 0 ; width < size ; width++)
		{
			_putchar ('#');
		}
	_putchar ('\n');
	}
}

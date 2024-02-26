#include "main.h"
/**
 * print_triangle - print square
 * @size: input from main
 *
 */
void print_triangle(int size)
{
	int nspace, height;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (height = 0 ; height < size ; height++)
		{
			for (nspace = (size - 1) ; nspace > height ; nspace--)
			{
				_putchar (' ');
			}
			for (nspace = 0 ; nspace <= height ; nspace++)
			{
				_putchar ('#');
			}
		_putchar ('\n');
		}
	}
}

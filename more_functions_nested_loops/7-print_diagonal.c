#include "main.h"
/**
 * print_diagonal - print \ in diag
 * @n: input from main
 *
 */
void print_diagonal(int n)
{
	int nspace, height;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (height = 0 ; height < n ; height++)
		{
			for (nspace = 0 ; nspace < height ; nspace++)
			{
				_putchar (' ');
			}
		_putchar ('\\');
		_putchar ('\n');
		}
	}
}

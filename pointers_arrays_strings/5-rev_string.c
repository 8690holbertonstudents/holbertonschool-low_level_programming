#include "main.h"
#include "_putchar.c"
#include "4-print_rev.c"
#include "3-puts.c"
/**
 * rev_string - use pointer
 * @s: input pointer from main
 *
 */
void rev_string(char *s)
{
	_puts(s);
	print_rev(s);
	_putchar('\n');
}

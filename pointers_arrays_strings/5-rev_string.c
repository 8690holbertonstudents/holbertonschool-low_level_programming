#include "main.h"
#include "4-print_rev.c"
#include "_putchar.c"
/**
 * rev_string - use pointer
 * @s: input pointer from main
 *
 */
void rev_string(char *s)
{
	print_rev(s);
	*s = (' ');
}

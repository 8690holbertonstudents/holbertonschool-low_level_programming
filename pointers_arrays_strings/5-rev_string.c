#include "main.h"
#include "_putchar.c"
/**
 * rev_string - use pointer
 * @s: input pointer from main
 *
 */
void rev_string(char *s)
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
	*s = '\0';
}

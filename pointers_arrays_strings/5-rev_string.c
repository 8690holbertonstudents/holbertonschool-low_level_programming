#include "main.h"
/**
 * rev_string - use pointer
 * @s: input pointer from main
 *
 */
void rev_string(char *s)
{
	int mypos = 0;
	int newpos = 0;

	while (s[mypos] != '\0')
	{
		mypos++;
	}
	mypos--;
	while (mypos >= 0)
	{
		s[newpos] = s[mypos];
		mypos--;
		newpos++;
	}
}

#include "main.h"
/**
 * _isupper - find upper character
 * @c: input value from main
 * Return: return c value to main
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		c = 1;
	else
		c = 0;
	return (c);
}

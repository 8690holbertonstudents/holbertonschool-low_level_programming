#include "main.h"
/**
 * _isdigit - find if digit or not
 * @c: input value from main
 * Return: return c value to main
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		c = 1;
	else
		c = 0;
	return (c);
}

#include "main.h"
/**
 * _islower - use _putchar
 * @c: input value from main
 * Return: return c value to main
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		c = 1;
	else
		c = 0;
	return (c);
}

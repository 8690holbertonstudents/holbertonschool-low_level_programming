#include "main.h"
/**
 * _isalpha - use _putchar
 * @c: input value from main
 * Return: return c value to main
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

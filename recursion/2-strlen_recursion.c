#include "main.h"
/**
 * _strlen_recursion - return a len of a string
 * @s: input char pointer from main
 * Return: 0 no errors
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

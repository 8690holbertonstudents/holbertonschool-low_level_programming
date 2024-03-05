#include "main.h"
/**
 * _strlen_recursion - return a len of a string
 * @s: input char pointer from main
 * Return: 0 no errors
 */
int _strlen_recursion(char *s)
{
	static int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}

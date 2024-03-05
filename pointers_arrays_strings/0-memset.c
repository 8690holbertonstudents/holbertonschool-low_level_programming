#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: input char pointer from main
 * @b: input char from main
 * @n: int from main
 * Return: 0 no errors
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

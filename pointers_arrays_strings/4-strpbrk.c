#include "main.h"
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: input char pointer from main
 * @accept: input char pointer from main
 * Return: 0 no errors
 */
char *_strpbrk(char *s, char *accept)
{

	int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		i = 0;
		s++;
	}
	return (0);
}

#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: input char pointer from main
 * @c: input char from main
 * Return: 0 no errors
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == (int)c)
			break;
		s++;
	}
	if (*s == '\0')
		return (0);
	else
		return (s);
}

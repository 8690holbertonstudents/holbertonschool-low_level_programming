#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate a character in a string
 * @s: input char pointer from main
 * @c: input char from main
 * Return: 0 no errors
 */
char *_strchr(char *s, char c)
{
	char *temp;
	temp = s;

	do {
		if (*temp == c)
			break;
		temp++;
	} while (*temp != '\0');
	if (*temp == '\0')
		return ("");
	else
		return (temp);
}

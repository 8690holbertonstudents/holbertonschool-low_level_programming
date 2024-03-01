#include "main.h"
#include "_putchar.c"
/**
 * *string_toupper - compare 2 string
 * @char: input from main
 * Return: Contact pointers
 */
char *string_toupper(char *s1)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] >= 'a' && s1[i] <= 'z')
			s1[i] = s1[i] -32;

		i++;
	}
	return (s1);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: input char pointer from main
 * Return: return pointer to main
 */
char *_strdup(char *str)
{
	char *ptr;
	int s_str = 0, i = 0;

	if (!(str == NULL))
	{
	while (str[s_str] != '\0')
		s_str++;
	}
	else
		return (NULL);

	ptr = (char *)malloc(s_str + 1);
	if (!(ptr == NULL))
	{
		while (i < s_str)
		{
			ptr[i] = str[i];
			i++;
		}
	}
	else
		return (NULL);
	return (ptr);
}

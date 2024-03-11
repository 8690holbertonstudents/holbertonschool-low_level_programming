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
	int s_str = 0;
	int i = 0;

	while (str[s_str] != '\0')
		s_str++;

	ptr = (char *)malloc(1 * sizeof(str));
	if (ptr == NULL || str == NULL)
		return (NULL);

	while (i < s_str)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}

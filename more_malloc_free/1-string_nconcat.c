#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - function that concatenates two strings,
 * contain first string s1 + n bytes of string s2
 * @s1: input 1st char pointer from main
 * @s2: input 2nd char pointer from main
 * @n: the n bytes to copy from main
 * Return: return pointer to main
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s_s1 = 0, s_s2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	else
	{
		while (s1[s_s1] != '\0')
			s_s1++;
	}
	if (s2 == NULL)
		s2 = "";
	else
	{
		while (s2[s_s2] != '\0')
			s_s2++;
		if (n < s_s2)
			s_s2 = n;
	}

	ptr = malloc(s_s1 + s_s2 + 1);
	if (!(ptr == NULL))
	{
		for (i = 0 ; i < s_s1 ; i++)
			ptr[i] = s1[i];
		for (j = 0 ; j < s_s2 ; j++)
			ptr[i + j] = s2[j];
		ptr[i + j] = '\0';
	}
	else
		return (NULL);
	return (ptr);
}

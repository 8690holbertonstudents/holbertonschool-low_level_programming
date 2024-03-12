#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: input 1st char pointer from main
 * @s2: input 2nd char pointer from main
 * Return: return pointer to main
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int s_s1 = 0, s_s2 = 0, i, j;

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
	}
	
	ptr = (char *)malloc(s_s1 + s_s2 + 1);
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

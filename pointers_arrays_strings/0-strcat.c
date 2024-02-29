#include "main.h"
#include <stdio.h>
/**
 * *_strcat - use pointer
 * @src: source pointer
 * @dest: destination pointer
 * Return: Contact pointers
 */
char *_strcat(char *dest, char *src)
{
	int i_s;
	int i_d;

	for (i_d = 0 ; dest[i_d] != '\0' ; i_d++)
		i_s = i_d;
	for (; src[i_s] != '\0' ; i_s++)
	{
		i_d++;
		dest[i_d] = src[i_s];
	}
	dest[i_d] = '\0';
	return (dest);
}

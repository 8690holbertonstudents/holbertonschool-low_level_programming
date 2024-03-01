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
	int i_s = 0;
	int i_d = 0;

	while (dest[i_d] != '\0')
	{
		i_d++;
	}
	
	while (src[i_s] != '\0')
	{
		dest[i_d++] = src[i_s];
		i_s++;
	}
	dest[i_d] = '\0';
	return (dest);
}

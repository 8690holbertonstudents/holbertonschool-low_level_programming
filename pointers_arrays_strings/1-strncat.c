#include "main.h"
#include <stdio.h>
/**
 * *_strncat - use pointer
 * @src: source pointer
 * @dest: destination pointer
 * @n: n bytes at the end
 * Return: Contact pointers
 */
char *_strncat(char *dest, char *src, int n)
{
	int i_s = 0;
	int i_d = 0;

	while (dest[i_d] != '\0')
	{
		i_d++;
	}

	while (src[i_s] != '\0' && i_s < n)
	{
		dest[i_d++] = src[i_s];
		i_s++;
	}

	dest[i_d] = '\0';
	return (dest);
}

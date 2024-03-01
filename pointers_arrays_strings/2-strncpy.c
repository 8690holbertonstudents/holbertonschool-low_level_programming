#include "main.h"
/**
 * *_strncpy - copy string to another
 * @src: source pointer
 * @dest: destination pointer
 * @n: n bytes at the end
 * Return: Contact pointers
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i_s = 0;

	while (src[i_s] != '\0' && i_s < n)
	{
		dest[i_s] = src[i_s];
		i_s++;
	}

	for (; i_s < n ; i_s++)
		dest[i_s] = '\0';

	return (dest);
}

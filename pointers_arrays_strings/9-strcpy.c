#include "main.h"
/**
 * *_strcpy - use pointer
 * @dest: input pointer from main
 * @src: input pointer from main
 * Return: Return pointer *dest to main
 */
char *_strcpy(char *dest, char *src)
{
	int idx;

	for (idx = 0 ; src[idx] != '\0' ; idx++)
		if (src[0] != '\0')
		{
			dest[idx] = src[idx];
		}
		else
		{
			dest[0] = '\0';
		}
	return (dest);
}

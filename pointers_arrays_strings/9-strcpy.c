#include "main.h"
#include <stddef.h>
/**
 * *_strcpy - use pointer
 * @dest: input pointer from main
 * @src: input pointer from main
 * Return: Return pointer *dest to main
 */
char *_strcpy(char *dest, char *src)
{
	int idx;

	if (src != NULL)
	{
	for (idx = 0 ; src[idx] != '\0' ; idx++)
		dest[idx] = src[idx];
	}
	else
	{
		dest = NULL;
	}
	return (dest);
}

#include "main.h"
/**
 * *_strcpy - use pointer
 * @dest: input pointer from main
 * @src: input pointer from main
 * Return: Return pointer *dest to main
 */
char *_strcpy(char *dest, char *src)
{
	int ids = 0;
	int idd;

	while (src[ids] != '\0')
		ids++;
	for (idd = 0 ; idd <= ids ; idd++)
		dest[idd] = src[idd];
	return (dest);
}

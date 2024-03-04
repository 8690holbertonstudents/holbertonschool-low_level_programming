#include "main.h"
/**
 * _memcpy - copy a memory area
 * @dest: input char dest pointer
 * @src: input char src pointer
 * @n: int from main
 * Return: 0 no errors
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (0);
}

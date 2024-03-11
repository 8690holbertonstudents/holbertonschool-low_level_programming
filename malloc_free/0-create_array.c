#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, initializes with a specific char
 * @size: input size from main
 * @c: input char from main
 * Return: return pointer "buffer" to main
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(c) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	else
	{
		for (i = 0 ; i < size ; i++)
			ptr[i] = c;
	}
	return (ptr);
}

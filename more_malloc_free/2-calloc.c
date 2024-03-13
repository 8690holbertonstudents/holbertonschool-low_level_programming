#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: input 1st char pointer from main
 * @size: input 2nd char pointer from main
 * Return: return pointer to main
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc((nmemb * size) * 4);

	if (!(ptr == NULL))
	{
		for (i = 0 ; i < nmemb ; i++)
			ptr[i] = 0;
	}
	else
		return (NULL);
	return (ptr);
}

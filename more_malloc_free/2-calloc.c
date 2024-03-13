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
	unsigned int *ptr;

	ptr = malloc(nmemb * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	return (ptr);
}

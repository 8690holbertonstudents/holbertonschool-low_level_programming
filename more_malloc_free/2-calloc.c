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

	ptr = malloc(nmemb * size);

	if (!(nmemb == 0 || size == 0 || ptr == NULL))
	{
		for (i = 0 ; ptr[i] != '\0' ; i++)
			ptr[i] = 0;
	}
	else
		return (NULL);
	return (ptr);
}

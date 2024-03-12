#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: input size from main
 * Return: return pointer to main
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

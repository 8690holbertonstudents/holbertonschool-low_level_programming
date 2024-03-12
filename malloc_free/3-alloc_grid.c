#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a
 * 2 dimensional array of integers
 * @width: input with size from main
 * @height: input height size from main
 * Return: return pointer to main
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;

	ptr = malloc(width * sizeof(int *));
	if (!(ptr == NULL))
	{
		for (i = 0 ; i < width ; i++)
		{
			ptr[i] = malloc(height * sizeof(int));
			if (ptr[i] == NULL)
				return (NULL);
		}
	return (ptr);
	}
	else
		return (NULL);
}

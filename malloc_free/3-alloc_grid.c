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
	int i, r, c;

	ptr = malloc(width * sizeof(int *));
	if (!(ptr == NULL))
	{
		for (i = 0 ; i < width ; i++)
		{
			ptr[i] = malloc(height * sizeof(int));
			if (ptr[i] == NULL)
				return (NULL);
		}
		for (r = 0 ; r < height ; r++)
		{
			for (c = 0 ; c < width ; c++)
				ptr[c][r] = 0;
		}
	return (ptr);
	}
	else
		return (NULL);
	return (0);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range -  unction that creates an array of integers
 * @min: input 1st char pointer from main
 * @max: input 2nd char pointer from main
 * Return: return pointer to main
 */
int *array_range(int min, int max)
{
	int **ptr;
	int i;

	if (min < 0 || max < 0 || min > max)
		return (NULL);

	ptr = malloc(min * sizeof(int *));
	if (!(ptr == NULL))
	{
		for (i = 0 ; i <= min ; i++)
		{
			ptr[i] = malloc(max * sizeof(int));
			if (ptr[i] == NULL)
			{
				/**
				*for (i = 0 ; i <= max ; i++)
				*	free(ptr[i]);
				*free(ptr);
				*/
				return (NULL);
			}
		}
		return (*ptr);
	}
	else
		return (NULL);
}

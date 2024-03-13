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
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(max * sizeof(int *));
	if (!(ptr == NULL))
	{
		for (i = 0 ; i <= max ; i++)
				ptr[i] = min + i;
	}
	else
		return (NULL);
	return (ptr);
}

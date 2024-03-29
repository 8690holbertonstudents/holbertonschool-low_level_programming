#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: input int pointer from main
 * @size: input size of array from main
 * @cmp: input pointer to function from main
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0 || array == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (*cmp != NULL)
		{
			result = (*cmp)(array[i]);
			if (result != 0)
				return (i);
		}
		else
			return (-1);
	}
	return (-1);
}

#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: input char pointer from main
 * @size: input size of array from main
 * @action: input pointer to function from main
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0 ; i < size ; i++)
		(*action)(array[i]);
}

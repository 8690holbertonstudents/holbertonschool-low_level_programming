#include "main.h"
/**
 * swap_int - use pointer
 * @a: input pointer from main
 * @b: input pointer from main
 *
 */
void swap_int(int *a, int *b)
{
	int store;

	store = *a;
	*a = *b;
	*b = store;
}

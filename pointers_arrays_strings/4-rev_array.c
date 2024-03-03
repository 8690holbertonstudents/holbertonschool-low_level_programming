#include "main.h"
/**
 * reverse_array - reverse array int
 * @a: input pointer
 * @n: size
 * Return: Contact pointers
 */
void reverse_array(int *a, int n)
{
	int temp;
	int *b;

	b = a + (n - 1);

	while (a < b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		a++;
		b--;
	}
}

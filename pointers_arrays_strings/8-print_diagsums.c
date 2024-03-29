#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals / square matrix of integers
 * @a: input int array pointer from main
 * @size: input int from main
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0 ; i < size ; ++i)
	{
	sum1 = sum1 + a[i * size + i];
	sum2 = sum2 + a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}

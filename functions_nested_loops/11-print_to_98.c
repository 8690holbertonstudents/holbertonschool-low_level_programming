#include "main.h"
#include <stdio.h>
/**
* print_to_98 -  make addition
* @n: input from main98
*/
void print_to_98(int n)
{
	for (; n > 98 ; n--)
		printf("%d, ", n);
	for (; n < 98 ; n++)
		printf("%d, ", n);
	printf("%d", n);
	printf("\n");
}

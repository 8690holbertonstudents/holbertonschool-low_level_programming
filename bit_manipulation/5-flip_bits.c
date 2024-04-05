#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first number value from main
 * @m: first number value from main
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comp;
	int count = 0;

	comp = n ^ m;

	while (comp)
	{
		count++;
		comp = comp & (comp - 1);
	}

	return (count);
}

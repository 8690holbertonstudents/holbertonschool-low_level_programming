#include "main.h"
/**
 * is_prime_number - find prime number
 * @n: input int num from main
 * Return: return values to main
 */
int is_prime_number(int n)
{
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (0);
	else
		return (1);
}

#include "variadic_functions.h"
/**
 * print_numbers - function that print numbers
 * with a given separator
 * @separator: string separator between numbers
 * @n: numbers to print
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		exit(1);
	}

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		if (separator == NULL || (i + 1) == n)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}
	printf("\n");
	va_end(args);
}

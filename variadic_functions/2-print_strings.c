#include "variadic_functions.h"
/**
 * print_strings - function that print strings
 * with a given separator
 * @separator: separator between string
 * @n: number of string to print
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
			printf("%s", va_arg(args, char *));
		else
			printf("%s%s", va_arg(args, char *), separator);
	}
	printf("\n");
	va_end(args);
}

#include "variadic_functions.h"
/**
 * print_all - print anything
 * with a given separato
 * @separator: separator between string
 * @n: number of string to print
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c ,", va_arg(args, int));
			break;
		case 'i':
			printf("%d ,", va_arg(args, int));
			break;
		case 'f':
			printf("%f ,", va_arg(args, double));
			break;
		case 's':
			printf("%s ,", va_arg(args, char *));
			break;
		default:
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

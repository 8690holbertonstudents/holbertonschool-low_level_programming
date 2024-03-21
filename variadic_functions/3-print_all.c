#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: string to iterate
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, state = 0;
	char *string;
	va_list args;

	if (format == NULL)
	{
		printf("\n");
		exit(0);
	}
	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			state = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			state = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			state = 1;
			break;
		case 's':
			string = va_arg(args, char *);
			printf("%s", string ? string : "(nil)");
			state = 1;
			break;
		default:
			state = 0;
			break;
		}
		i++;
		if (state == 1 && format[i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}

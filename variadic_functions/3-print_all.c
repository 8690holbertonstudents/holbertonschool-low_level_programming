#include "variadic_functions.h"
/**
 * print_all - print anything
 * @format: string to iterate
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, state = 0;
	va_list args;

	if (format == NULL)
	{
		printf("\n");
		exit(0);
	}
	va_start(args, format);

	while (format[i] != '\0')
	{
		select_case(format[i], args, state);
		i++;
		if (state == 1 && format[i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
/**
 * select_case - print output of "case" format
 * @comp: char to switch case
 * @args: va_list args from print_all variadic function
 * @bool: status value from print_all (true or false)
 * Return: bool to print_all
 */
int select_case(char comp, va_list args, int bool)
{
	char *string;

	switch (comp)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			bool = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			bool = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			bool = 1;
			break;
		case 's':
			string = va_arg(args, char *);
			printf("%s", string ? string : "(nil)");
			bool = 1;
			break;
		default:
			bool = 0;
			break;
		}
	return (bool);
}

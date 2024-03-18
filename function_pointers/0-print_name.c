#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - function that prints a name
 * @name: input char pointer from main
 * @f: input pointer to function from main
 * Return:
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

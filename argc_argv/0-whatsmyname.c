#include "main.h"
#include <stdio.h>
/**
 * _main - main function that print program name
 * @argc: input int numbers of arguments
 * @argv: input char pointer contain arguments
 * Return: 0 no errors
 */
int main (int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	else
		printf("%s\n", argv[argc - 1]);
	return (0);
}

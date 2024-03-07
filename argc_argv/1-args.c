#include "main.h"
#include <stdio.h>
/**
 * main - main function count arg nb passed to cli
 * @argc: input int numbers of arguments
 * @argv: input char pointer contain arguments
 * Return: 0 no errors
 */
int main(int argc, char *argv[])
{
	argv[0] = "";

	if (argc == 1)
		printf("0\n");
	else
		printf("%d\n", argc - 1);
	return (0);
}

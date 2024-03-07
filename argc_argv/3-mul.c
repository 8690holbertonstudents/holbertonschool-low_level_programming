#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function multiply two numbers
 * @argc: input int numbers of arguments
 * @argv: input char pointer contain arguments
 * Return: 0 no errors
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc > 2)
		printf("%d\n", (mul = atoi(argv[1]) * atoi(argv[2])));
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

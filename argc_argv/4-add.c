#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function add only two numbers
 * @argc: input int numbers of arguments
 * @argv: input char pointer contain arguments
 * Return: 0 no errors
 */
int main(int argc, char *argv[])
{
	int add = 0, i, j = 0;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
					j++;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			j = 0;
			add = add + atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	else
		printf("0\n");
	return (0);
}

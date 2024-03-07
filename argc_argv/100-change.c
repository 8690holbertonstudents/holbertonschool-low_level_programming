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
	int num = atoi(argv[1]);
	int piece, result = 0;

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}
	else if (num <= 0)
		printf("0\n");
	else
	{
		while (num >= 0)
		{
		if (num > 25)
			piece = 25;
		else if (num > 10)
			piece = 10;
		else if (num > 5)
			piece = 5;
		else if (num > 2)
			piece = 2;
		else
			piece = 1;
		result = result + (num / piece);
		num = num - (result * piece);
		}
		printf("%d\n", result);
	}
	return (0);
}

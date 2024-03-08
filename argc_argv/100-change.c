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
	int result = 0;

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}
	else if (num <= 0)
		printf("0\n");
	else
	{
		while (num > 0)
		{
		if (num >= 25)
			num -= 25;
		else if (num >= 10)
			num -= 10;
		else if (num >= 5)
			num -= 5;
		else if (num >= 2)
			num -= 2;
		else if (num >= 1)
			num -= 1;
		result++;
		}
		printf("%d\n", result);
	}
	return (0);
}

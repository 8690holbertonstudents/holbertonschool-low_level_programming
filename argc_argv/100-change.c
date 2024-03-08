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
	int result = 0;

		if (argc == 2)
		{
		int num = atoi(argv[1]);

		while (num > 0)
		{
			result = num / 25;
			num %= 25;
			result += num / 10;
			num %= 10;
			result += num / 5;
			num %= 5;
			result += num / 2;
			num %= 2;
			result += num;
			num--;
		}
		printf("%d\n", result);
		}
		if (argc == 1 || argc > 2)
		{
			printf("Error\n");
			return (1);
		}
	return (0);
}

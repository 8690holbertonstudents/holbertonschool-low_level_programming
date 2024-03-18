#include "3-calc.h"
/**
 * main - main function get values from std input
 * @argc: input int numbers of arguments
 * @argv: input char pointer contain arguments
 * Return: 0 no errors
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	char _op = argv[2][0];
	int b = atoi(argv[3]);


	if (argc == 4)
	{
		get_op_func(_op)(a, b);
		printf("%d\n",a);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

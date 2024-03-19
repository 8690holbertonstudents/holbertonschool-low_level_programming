#include "3-calc.h"
/**
 * main - main function get values from std input
 * @argc: input int numbers of arguments
 * @argv: input char pointer contain arguments
 * Return: 0 no errors
 */
int main(int argc, char *argv[])
{
	int result, a, b;
	char *ptr_op;

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	ptr_op = argv[2];
	b = atoi(argv[3]);

	result = get_op_func(ptr_op)(a, b);
	printf("%d\n", result);

	return (0);
}

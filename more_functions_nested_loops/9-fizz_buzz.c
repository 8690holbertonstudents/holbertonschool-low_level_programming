#include <stdio.h>
/**
 * main - FizzBuzz program
 * @void: is nothing
 * Return: 0 no errors
 */
int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		if ((num % 3) == 0 && (num % 5) != 0)
			printf("Fizz ");
		else if ((num % 5) == 0 && (num % 3) != 0)
		{
			if (num == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if ((((num % 3) && (num % 5))) == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - use if and printf
* Return: 0 no errors
*/
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	if (n < 6)
		printf("Last digit of %d is %d and is less than 6\n", n, lastd);
	return (0);
}

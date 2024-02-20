#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - use if and printf
* Return: 0 no errors
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%d is zero", n);
	if (n > 0)
		printf("%d is positive", n);
	if (n < 0)
		printf("%d is negative", n);
	return (0);
}

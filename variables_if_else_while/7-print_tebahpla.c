#include <stdio.h>
/**
* main - use putchar
* Return: 0 no errors
*/
int main(void)
{
	char alphab = 'z';
	char end = '\n';

	while (alphab >= 'a')
	{
		putchar(alphab);
		alphab--;
	}
	putchar(end);
	return (0);
}

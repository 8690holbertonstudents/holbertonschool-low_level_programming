#include <stdio.h>
/**
* main - use putchar
* Return: 0 no errors
*/
int main(void)
{
	char alphab = '0';
	char end = '\n';

	while (alphab <= '9')
	{
		putchar(alphab);
		alphab++;
	}
	alphab = 'a';
	while (alphab <= 'f')
	{
		putchar(alphab);
		alphab++;
	}
	putchar(end);
	return (0);
}

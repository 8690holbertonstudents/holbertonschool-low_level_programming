#include <stdio.h>
/**
* main - use putchar
* Return: 0 no errors
*/
int main(void)
{
	char alphab = 'a';
	char end = '\n';

	while (alphab <= 'Z')
	{
		putchar(alphab);
		alphab++;
	}
	putchar(end);
	return (0);
}

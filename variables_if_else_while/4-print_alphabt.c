#include <stdio.h>
/**
* main - use putchar
* Return: 0 no errors
*/
int main(void)
{
	char alphab = 'a';
	char end = '\n';

	while (alphab <= 'z')
	{
		if (alphab == 'q' || alphab == 'e')
			alphab++;
		putchar(alphab);
		alphab++;
	}
	putchar(end);
	return (0);
}

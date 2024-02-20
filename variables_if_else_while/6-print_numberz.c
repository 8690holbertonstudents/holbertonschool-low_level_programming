#include <stdio.h>
/**
* main - use putchar with numbers
* Return: 0 no errors
*/
int main(void)
{
	int dig = '0';

	while (dig <= '9')
	{
		putchar(dig);
		dig++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
* main - use putchar
* Return: 0 no errors
*/
int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}

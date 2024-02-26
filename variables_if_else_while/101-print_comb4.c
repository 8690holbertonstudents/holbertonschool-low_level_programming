#include <stdio.h>
/**
* main - use putchar
* Return: 0 no errors
*/
int main(void)
{
	int digitD, digitU;

	for (digitD = 0 ; digitD <= 8 ; digitD++)
	{
		for (digitU = (digitD + 1) ; digitU <= 9 ; digitU++)
		{
			putchar('0' + digitD);
			putchar('0' + digitU);
			if (digitD == 8 && digitU == 9)
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

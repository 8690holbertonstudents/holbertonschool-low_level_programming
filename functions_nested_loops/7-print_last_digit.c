#include "main.h"
#include "6-abs.c"
/**
* print_last_digit - absolute value
* @numb: input parameter
* Return: return value to main
*/
int print_last_digit(int numb)
{
	int numbp, lastd;

	if (numb < 0)
	{
		numbp = _abs(numb);
		lastd = numbp % 10;
	}
	else
	{
		lastd = numb % 10;
	}
	_putchar ('0' + lastd);
	return (lastd);
}

#include "main.h"
#include "6-abs.c"
#include <limits.h>
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
	else if (numb >=0)
	{
		lastd = numb % 10;
	}
	else
	{
		return (0);
	}
	_putchar ('0' + lastd);
	return (lastd);
}

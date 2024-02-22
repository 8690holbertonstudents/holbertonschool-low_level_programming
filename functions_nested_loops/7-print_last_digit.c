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
	int lastd = _abs(numb % 10);

	_putchar ('0' + lastd);
	return (lastd);
}

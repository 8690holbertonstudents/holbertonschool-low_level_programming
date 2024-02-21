#include "main.h"
/**
* _abs - absolute value
* @sign: input parameter
* Return: return value to main
*/
int _abs(int sign)
{
	if (sign < 0)
		sign = sign * -1;
	return (sign);
}

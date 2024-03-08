#include "main.h"
#include <stdio.h>
/**
 * set_string - set the valu of a pointer to a char
 * @s: input char double pointer from main
 * @to: input char pointer from main
 */
void set_string(char **s, char *to)
{
	*s = to;
}

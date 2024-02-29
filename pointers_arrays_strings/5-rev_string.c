#include "main.h"
/**
 * rev_string - use pointer
 * @s: input pointer from main
 *
 */
void rev_string(char *s)
{
	char value;
	int count;
	int size1 = 0;
	int size2 = 0;

	while (*s != '\0')
		size1++;

	size2 = size1 - 1;

	for (count = 0; count< size1 / 2; count++)
	{
		value = s[count];
		s[count] = s[size2];
		s[size2 - 1] = value;
	}
}

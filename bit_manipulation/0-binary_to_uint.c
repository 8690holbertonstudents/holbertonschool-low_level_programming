#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: input pointer from main
 * Return: The numbers of nodes
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			result = (result << 1) | 1;
		else
			result = result << 1;
		i++;
	}
	return (result);
}

#include "main.h"
/**
 * cap_string - use pointer
 * @s1: input pointer from main
 * Return: New pointer value
 */
char *cap_string(char *s1)
{
	int i = 1;
	int j = 0;

	while (s1[i] != '\0')
	{
		if (s1[i - 1] == '.')
			j = 1;
		if (s1[i - 1] == 9)
			j = 1;
		if (s1[i - 1] == 10)
			j = 1;
		if (s1[i - 1] == ' ')
			j = 1;
		if (s1[i] >= 'a' && s1[i] <= 'z' && j == 1)
			s1[i] = s1[i] - 32;

		j = 0;
		i++;
	}
	return (s1);
}

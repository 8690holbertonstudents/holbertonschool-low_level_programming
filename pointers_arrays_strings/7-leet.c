#include "main.h"
/**
 * leet - use pointer
 * @s1: input pointer from main
 * Return: New pointer value
 */
char *leet(char *s1)
{
	int i = 0, j = 0;
	char input[10] = "aAeEoOtTlL";
	char output[10] = "4433007711";

	while (s1[i] != '\0')
	{
		while (j <= 9)
		{
			if (s1[i] == input[j])
				s1[i] = output[j];
			j++;
		}
		i++;
		j = 0;
	}
	return (s1);
}

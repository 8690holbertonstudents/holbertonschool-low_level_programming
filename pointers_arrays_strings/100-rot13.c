#include "main.h"
/**
 * rot13 - use rot13 code
 * @s1: input pointer from main
 * Return: New pointer value
 */
char *rot13(char *s1)
{
	int i = 0, j = 0;
	char inp[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char out[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLnN";

	while (s1[i] != '\0')
	{
		while (inp[j] != '\0')
		{
			if (s1[i] == inp[j])
			{
				s1[i] = out[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

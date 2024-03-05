#include "main.h"
/**
 * _strspn - get a length of a prefix substring
 * @s: input char pointer from main
 * @accept: input char from main
 * Return: 0 no errors
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, count = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			j++;
			if (s[i] == accept[j])
				count++;
			else if (accept[j] == '\0')
				break;
		}
		j = 0;
	i++;
	}
	if (s[i] == '\0')
		return (0);
	else
		return (count);
}

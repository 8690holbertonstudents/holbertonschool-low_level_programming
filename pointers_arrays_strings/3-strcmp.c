#include "main.h"
/**
 * *_strcmp - compare 2 string
 * @s1: first string
 * @s2: second string
 * Return: Contact pointers
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int val = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			val = (int)s1[i] - (int)s2[i];
			break;
		}
	}
	return (val);
}

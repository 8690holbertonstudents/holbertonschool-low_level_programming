#include "main.h"
/**
 * _atoi - use pointer
 * @s: input pointer from main
 * Return: Return
 */
int _atoi(char *s)
{
	int i;
	int ret = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
        	ret = ret * 10 + s[i] - '0';
		else if (s[i + 1] <= '0' && s[i] >= '9')
		{
			break;
		}
	}
	return (ret);
	ret = 0;
}

#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input char pointer from main
 * @needle: input char pointer from main
 * Return: 0 no errors
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack != '\0')
	{
		if (haystack[i] == needle[i])
		{
			while (needle[i] != '\0')
			{
				i++;
				if (haystack[i] == needle[i])
					return (haystack);
			}
			i = 0;
		}
		haystack++;
	}
	return (0);
}

#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: input char pointer from main
 * @needle: input char pointer from main
 * Return: 0 no errors
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			return (haystack);
		haystack++;
	}
	return (0);
}

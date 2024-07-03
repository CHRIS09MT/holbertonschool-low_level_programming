#include <stddef.h>
#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring needle
 * @haystack: String
 * @needle: finds the first occurrence of the substring
 * Return: Returns a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{

			if (needle[i] != haystack[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}

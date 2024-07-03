#include "main.h"
#include <stddef.h>

/**
 * _strchr - print the character the pointer c
 * @s: A char string
 * @c: character of the string
 * Return: Returns a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
	return (NULL);
}

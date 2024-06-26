#include "main.h"

/**
 * _strcmp - comparation the two strings
 * @s1: first pointer
 * @s2:second pointer
 * Return: return the comparation
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}

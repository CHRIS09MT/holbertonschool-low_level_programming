#include "main.h"
#include <stdlib.h>

/**
 * str_concat - string to concatent
 * @s1: first string
 * @s2: second string
 * Return: return the strings concatenates
 */

char *str_concat(char *s1, char *s2)
{
	int n1, n2, b, c;
	char *a;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;

	a = malloc((n1 * sizeof(*s1)) + (n2 * sizeof(*s2)) + 1);

	if (a == NULL)
		return (NULL);

	for (b = 0, c = 0; b < (n1 + n2 + 1); b++)
	{
		if (b < n1)
			a[b] = n1[b];
		else
			a[b] = n2[c++];
	}

	return (a);
}

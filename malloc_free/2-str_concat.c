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
	int n1 = 0, n2 = 0, b, c;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[n1] != '\0')
		n1++;

	while (s2[n2] != '\0')
		n2++;

	a = malloc(n1 + n2 + 1);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < n1; b++)
		a[b] = s1[b];

	for (c = 0; c < n2; c++)
		a[b++] = s2[c];

	a[b] = '\0';

	return (a);
}

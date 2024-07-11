#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Write a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: return the pointer a
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int len = n, b;

	if (s1 == NULL)
		s1 = ("");

	if (s2 == NULL)
		s2 = ("");

	for (b = 0; s1[b]; b++)
		len++;

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	len = 0;

	for (b = 0; s1[b]; b++)
		a[len++] = s1[b];

	for (b = 0; s2[b] && b < n; b++)
		a[len++] = s2[b];

	a[len] = '\0';

	return (a);
}

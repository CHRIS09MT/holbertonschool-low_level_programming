#include "main.h"

/**
 * _memset - start pointer
 * @s: pointer to fills memory
 * @b: chars
 * @n: amount the print
 * Return: return the pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}

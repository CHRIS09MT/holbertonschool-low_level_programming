#include "main.h"

/**
 * _strncpy - start pointer
 * @dest: first pointer
 * @src: second pointer
 * @n: numbers the copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while  (x < n && *(src + x) != '\0')
	{
		*(dest + x) = *(src + x);
		x++;
	}
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}

	return (dest);
}

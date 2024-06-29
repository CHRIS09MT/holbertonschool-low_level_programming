#include "main.h"

/**
 * _strncat - start funtion
 * @dest: first pointer
 * @src: second pointer
 * @n: num the of print
 * Return: return the value the of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	while (*(dest + i))
		i++;

	while (*(src + x) && x < n)
	{
		*(dest + i) = *(src + x);
		i++;
		x++;
	}

	return (dest);
}

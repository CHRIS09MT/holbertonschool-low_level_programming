#include "main.h"

/**
 * _strcpy - copye the content the pointer src the of pointer dest.
 * @src: pointer to copy
 * @dest: pointer to redirect
 * Return: Return the value of src
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (*(src + a) != 0)
	{
		(*(dest + a)) = (*(src + a));
		a++;
	}
	return (dest);
}

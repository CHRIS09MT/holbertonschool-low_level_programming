#include "main.h"

/**
 * string_toupper - if the pointer is lowercase tranformat in uppercase
 * @s: pointer to tranformat in uppercase
 * Return: return tranformation
 */

char *string_toupper(char *s)
{
	int b = 0;

	while (*(s + b))
	{
		if (*(s + b) <= 'z' && *(s + b) >= 'a')
			*(s + b) -= 32;
		b++;
	}
	return (s);
}

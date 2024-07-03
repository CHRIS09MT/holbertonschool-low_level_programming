#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: number of bytes in the initial segment
 * @accept: number bytes accept
 * Return: the number of bytes in the initial segment of s which consist
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c = 0;
	int d = 0;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		d = 0;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				c++;
				d = 1;
				break;
			}
		}
		if (d == 0)
			return (c);
	}
	return (c);
}

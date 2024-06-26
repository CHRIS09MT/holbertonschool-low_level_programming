#include "main.h"

/**
 * _strlen - return the length of the pointer s
 * @s: the pointer
 * Return: return length of s
 */

int _strlen(char *s)
{
	int retVal = 0;

	while (1)
	{
		if (*(s + retVal) == '\0')
			return (retVal);
		retVal++;
	}
}

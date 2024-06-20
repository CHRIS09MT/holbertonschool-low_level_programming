#include "main.h"

/**
 * _islower - Return 1 if the character is lowercase
 * @c: Character to print
 * Return: Always 0
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}

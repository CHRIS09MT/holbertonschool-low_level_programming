#include "main.h"

/**
 * _isupper - Start pointer
 * @c: return 1
 * Return: Always 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

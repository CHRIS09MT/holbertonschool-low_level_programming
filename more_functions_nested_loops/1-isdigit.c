#include "main.h"

/**
 * _isdigit - Start pointer
 * @c: checker if c is a number or a character
 * Return: return 1 if c is number, else return 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

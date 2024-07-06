#include "main.h"

/**
 * _strlen_recursion - print the amount the characteris in the pointer s
 * @s: pointer
 * Return: Return the amount the s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return;
	return (_strlen_recursion(s + 1) + 1);
}

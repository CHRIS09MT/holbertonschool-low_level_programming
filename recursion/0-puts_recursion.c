#include "main.h"

/**
 * _puts_recursion - print a pointer type char
 * @s: menssenger to print
 * Return: Always null
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

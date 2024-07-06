#include "main.h"

/**
 * _print_rev_recursion - print s in reverse
 * @s: characters to print
 * Return: Always s
 */

void _print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(s + 1);
	if (*s)
		_putchar(*s);
	return;
}

#include "main.h"

/**
 * print_line - printing a _ depending the of amount the n
 * @n: amount the times of print _
 */

void print_line(int n)
{
	char a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');

		if (n <= 0)
			_putchar('\n');
	}
	_putchar('\n');
}

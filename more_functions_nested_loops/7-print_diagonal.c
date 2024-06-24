#include "main.h"

/**
 * print_diagonal - draw lines diagonals and a space
 * @n: Amount the times to print
 */

void print_diagonal(int n)
{
	char a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ');

		_putchar('\\');

		if (a == n - 1)
			continue;
		_putchar('\n');
	}
	_putchar('\n');
}

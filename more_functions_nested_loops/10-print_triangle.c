#include "main.h"

/**
 */

void print_triangle(int size)
{
	char a, b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = size - a - 1; b > 0; b--)
			_putchar(' ');
		for (b = 0; b <= a; b++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}

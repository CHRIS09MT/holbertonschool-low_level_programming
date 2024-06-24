#include "main.h"

/**
 * print_square - printing a # deppending the amount of size
 * @size: number the wear to print
 */

void print_square(int size)
{
	char a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
			_putchar('#');

		if (size <= 0)
			_putchar('\n');
		_putchar('\n');
	}
}

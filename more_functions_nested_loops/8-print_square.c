#include "main.h"

/**
 * print_square - printing a # deppending the amount of size
 * @size: number the wear to print
 */

void print_square(int size)
{
	char a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

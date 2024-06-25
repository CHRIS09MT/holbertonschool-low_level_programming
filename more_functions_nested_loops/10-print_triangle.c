#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: number of # to print
 */

void print_triangle(int size)
{
	char a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size - a; b++)
				_putchar(' ');
			for (b = 1; b <= a; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

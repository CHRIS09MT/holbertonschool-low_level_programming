#include "main.h"

/**
 * times_table - print the 9 table of multiplication
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 0; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

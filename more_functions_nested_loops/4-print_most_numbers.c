#include "main.h"

/**
 * print_most_numbers - print the number of 0 to 9, ignoring the 2 and 4
 */

void print_most_numbers(void)
{
	char a;

	for (a = 0; a <= 9; a++)
		if ((a != 2) && (a != 4))
			_putchar(a + '0');
	_putchar('\n');
}

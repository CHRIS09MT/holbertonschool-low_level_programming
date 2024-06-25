#include "main.h"

/**
 * print_number - print the numbers with his unsigned
 * @n: amoun the n times
 */

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		a = (unsigned int) (n * -1);
		_putchar(45);
	}
	else
		a = (unsigned int) n;

	if (a / 10 > 0)
		print_number(a / 10);
	_putchar(a % 10 + '0');
}

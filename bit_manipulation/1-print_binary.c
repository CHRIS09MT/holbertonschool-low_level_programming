#include "main.h"
/**
 * print_binary - convert a decimal to a binary
 * @n: the decimal number to convert
 */
void print_binary(unsigned long int n)
{
	int i = sizeof(n) * 8 - 1;
	unsigned long int number = 1;

	number <<= i;

	while (i > 0 && !(number & n))
	{
		number >>= 1;
		i--;
	}
	for (; i >= 0; i--)
	{
		if (number & n)
			_putchar('1');
		else
			_putchar('0');
		number >>= 1;
	}
}

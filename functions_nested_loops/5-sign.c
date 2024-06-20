#include "main.h"

/**
 * print_sign - print + if n is greater to 0, - if n is less than 0 and 0 if n
 * is equal to 0
 * @n: Numbers to print
 * Return: Always 1, 0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

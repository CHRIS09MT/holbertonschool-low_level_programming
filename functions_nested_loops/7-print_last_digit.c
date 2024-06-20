#include "main.h"

/**
 * print_last_digit - funtion to execute
 * Return: return the last digit of the variable a
 * @a: number to print
 */

int print_last_digit(int a)
{
	int n = a % 10;

	if (n < 0)
	{
		n = -n;
	}
		_putchar(n + '0');
	return (n);
}

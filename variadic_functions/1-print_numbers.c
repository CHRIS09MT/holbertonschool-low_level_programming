#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print the numbers with a separator
 * @separator: the separator of the numbers
 * @n: parameters to print
 * Return: return the numbers with the separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int ac;
	unsigned int p;

	va_start(args, n);

	for (p = 0; p < n; p++)
	{
		ac = va_arg(args, int);

		printf("%d", ac);

		if (separator != NULL && p < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

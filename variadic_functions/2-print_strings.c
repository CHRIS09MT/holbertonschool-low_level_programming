#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print menssenger
 * @separator: separator
 * @n: parameter to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ac = 0;

	va_list args;

	va_start(args, n);

	for (; ac < n; ac++)
	{
		const char *str = va_arg(args, const char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && ac < n - 1)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}

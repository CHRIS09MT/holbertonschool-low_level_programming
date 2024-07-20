#include <stdarg.h>
#include "variadic_functions.h"

/**
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int ac = 0;
	unsigned int ope = 0;
	va_start(args, n);

	if (n != 0)
	{
		for (; ope < n; ope++)
		{
			int sig = va_arg(args, int);
			ac += sig;
		}
	}
	else
		return 0;

	va_end(args);

	return (ac);
}

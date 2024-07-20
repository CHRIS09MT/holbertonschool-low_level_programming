#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - this program adds all parameters of the function
 * and return the result
 * @n: parameter
 * Return: return the add of all the parameters
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
			ac += va_arg(args, int);
	}
	else
		return (0);

	va_end(args);

	return (ac);
}

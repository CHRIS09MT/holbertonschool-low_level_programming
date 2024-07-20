#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * functionChar - print a char
 * @args: the list
 */

void functionChar(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * functionInt - print a int
 * @args: the list
 */

void functionInt(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * functionFloat - print a float
 * @args: the list
 */

void functionFloat(va_list args)
{
	printf("%.2f", va_arg(args, double));
}

/**
 * functionString - print strings
 * @args: the list
 */

void functionString(va_list args)
{
	char *str = va_arg(args, char *);

	if (str)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - print a char, int, float and strings
 * @format: a list of types
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int a = 0, b;
	char *separator = "";

	argtype argTypes[] = {
		{'c', functionChar},
		{'i', functionInt},
		{'f', functionFloat},
		{'s', functionString},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format  && *(format + a))
	{
		b = 0;

		while (argTypes[b].arg)
		{
			if (argTypes[b].arg == *(format + a))
			{
				printf("%s", separator);
				argTypes[b].printFunction(args);
				separator = ", ";
				break;
			}
			b++;
		}
		a++;
	}

	va_end(args);
	printf("\n");
}

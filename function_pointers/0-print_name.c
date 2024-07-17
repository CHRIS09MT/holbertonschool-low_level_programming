#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print a name.
 * @name: address of name.
 * @f: funtion
 */

void print_name(char *name, void (*f)(char *))
{
	void (*a)(char *) = f;

	a(name);
}

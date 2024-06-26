#include "main.h"

/**
 * swap_int - Exchanging values the pointer a and b.
 * @a: first number to exchange.
 * @b: second number to exchange.
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}

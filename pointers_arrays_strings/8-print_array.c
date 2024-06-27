#include <stdio.h>
#include "main.h"

/**
 * print_array - print arrays
 * @a: the pointer
 * @n: amount of arrays to print
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", (*(a + b)));

		if (*(a + b) != (*(a + n - 1)))
			printf(", ");
	}
	printf("\n");
}

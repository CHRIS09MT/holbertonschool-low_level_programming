#include "main.h"

/**
 * reverse_array - start pointer
 * @a: first pointer
 * @n: second pointer
 */

void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n / 2; i++)
	{
		b = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = b;
	}
}

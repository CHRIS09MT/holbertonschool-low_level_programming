#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - se pedirá memoria para almacenar b
 * @b: pointer to resever
 * Return: return the pointer a
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}

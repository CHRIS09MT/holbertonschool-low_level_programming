#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - pedir memoria para los arrays de tamaño 'size'
 * @nmemb: assing memory to this pointer
 * @size: assing memory the size 'size'
 * Return: return arrays
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	a = malloc(total);

	if (a == NULL)
		return (NULL);

	memset(a, 0, total);

	return (a);
}

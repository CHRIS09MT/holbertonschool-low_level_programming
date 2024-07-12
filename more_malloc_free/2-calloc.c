#include "main.h"
#include <stdlib.h>

/**
 * _calloc - pedir memoria para los arrays de tamaño 'size'
 * @nmemb: assing memory to this pointer
 * @size: assing memory the size 'size'
 * Return: return arrays
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a != NULL)
	{
		for (; b < (nmemb * size); b++)
			a[b] = 0;
		return (a);
	}

	else
		return (NULL);
}

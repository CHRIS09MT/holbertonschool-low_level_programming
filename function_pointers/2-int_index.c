#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @cmp: function which compare values
 * @array: array to print
 * @size: size of arrays
 * Return: returns -1 if no element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; b < size; b++)
	{
		if (cmp(array[b]) != 0)
			return (b);
	}

	return (-1);
}

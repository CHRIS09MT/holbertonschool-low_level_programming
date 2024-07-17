#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - print parametres of array
 * @array: array to print
 * @size: size of arrray
 * @action: pointer of funtion
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size; i++)
		action(array[i]++);
}

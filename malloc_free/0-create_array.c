#include "main.h"
#include <stdlib.h>

/**
 * create_array - create a array
 * @size: amount
 * @c: char to print
 * Return: Return NULL if size is equal to 0 or NULL if array is equal to NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *array = malloc(size * sizeof(c));

	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (; a < size; a++)
		array[a] = c;
	return (array);
}

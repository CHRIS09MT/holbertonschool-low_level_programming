#include "main.h"
#include <stdlib.h>

/**
 * array_range - Crea un array
 * @min: Rango mínimo
 * @max: Rango máximo
 * Return: Return the arrays
 */

int *array_range(int min, int max)
{
	int *array;
	int b, c = 0;
/** esto verifica que 'min' no sea mayor que 'max' */
	if (min > max)
		return (NULL);
/** aquí se asigna memoria para 'array' */
	array = malloc(sizeof(*array) * ((max - min) + 1));
/** se llena 'array' llevando 'min' hasta 'max' */
	if (array != NULL)
	{
		for (b = min; b <= max; b++)
		{
			array[c] = b;
			c++;
		}
		return (array);
	}
	else /** retorna NULL si hay un error */
		return (NULL);
}

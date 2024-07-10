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
    /** declarando variable para usar un bucle */
	unsigned int a = 0;

    /** se asigna memoria del tamaño de 'size', donde cada elemento es de tipo char */
	char *array = malloc(size * sizeof(c));

	if (size == 0)         /** si el tamañano (size) es igual a 0, se retorna NULL */
		return (NULL);
	if (array == NULL)     /** si la asignacion de memoria falla, se retorna NULL */
		return (NULL);
	for (; a < size; a++)
		array[a] = c;  /** se inicializa cada posición del array con el carácter 'c' */
	return (array);        /** aqui se retorna el puntero al array creado */
}

#include "main.h"
#include <string.h>

/**
* binary_to_uint - Convert binary
* @b: binary
* Return: convert binary to decimal
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL) /** Verificamos que la cadena no sea NULL */
		return (0);

	/** Se recorre la cadena */
	while (*b) /** Continúa hasta lleguar al final */
	{/** Se verifica que la cadena sea 0 y 1 */
		if (*b != '0' && *b != '1')
			return (0);

	/** Se desplaza a la izquierda y se agrega el bit */
	result = (result << 1) | (*b - '0');
	b++; /** Avanza al siguiente carácter */
	}

	return (result); /** Se devuelve el resultado */
}

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
	int len = strlen(b), i;

	if (b == NULL) /** Verificamos que la cadena no sea NULL */
		return (0);
	/** Se recorre la cadena */
	for (i = 0; i < len; i++)
	{/** Se verifica que la cadena sea 0 y 1 */
		if (b[i] != '0' && b[i] != '1')
			return (0);
		/** Se desplaza a la izquierda y se agrega el bit */
		result = (result << 1) | (b[i] - '0');
	}

	return (result); /** Se devuelve el resultado */
}

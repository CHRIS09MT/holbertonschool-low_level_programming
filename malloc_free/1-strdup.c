#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 * Return: return the string duplicate
 */

char *_strdup(char *str)
{
	char *a;    /** almacenar� la cadena duplicada */
	int b = 0;  /** este int es para el bucle inicializando en el �ndice 0 */
	int length = 0;   /** tama�o de la cadena */

	/** aqu� se revisa si la cadena de entrada (str) es igual a NULL */
	if (str == NULL)
		return (NULL);

	/** aqu� se calcula la longitud de la cadena */
	for (length = 0; str[length] != '\0'; length++)
		;

	/** pedimos memoria suficiente para poder almacenar la cadena duplicada */
	a = malloc((length + 1) * sizeof(char));

	/** esto retorna NULL si la asignaci�n de memoria fall� */
	if (a == NULL)
		return (NULL);

	/** copia la cadena original en el espacio de memoria asignada, incluye car�cter nulo */
	for (b = 0; b <= length; b++)
		a[b] = str[b];

	/** retorna la cadena duplicada */
	return (a);
}

/** segundo c�digo*/

char *_strdup(char *str)
{
	char *a;        /** aqu� se almacenar� la cadena duplicada */

	if (str == NULL)
		return (NULL);

	a = strdup(str);        /** duplicamos 'str' usando strdup */

	if (a == NULL)
		return (NULL);

	return (a);
}

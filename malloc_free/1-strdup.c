#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 */

char *_strdup(char *str)
{
	char *a;            /** aquí almacenaré la cadena duplicada */

	if (str == NULL)
		return (NULL);

	a = strdup(str); /** duplicando el str usando 'strdup'*/

	if (a == NULL)
		return (NULL);

	return (a);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 * Return: if str is equal to NULL return NULL
 */

char *_strdup(char *str)
{
	char *a;
	int i = 0, length = 0;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	a = (char *) malloc((length + 1) * sizeof(char));

	if (a == NULL)

		return (NULL);

	for (i = 0; i <= length; i++)

		a[i] = str[i];

	return (a);
}

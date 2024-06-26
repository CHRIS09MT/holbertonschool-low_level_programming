#include "main.h"

/**
 */

int _strlen(char *s)
{
	int retVal = 0;

	while (1)
	{
		if (*(s + retVal) == '\0')
			return (retVal);
		else
			retVal++;
	}
}

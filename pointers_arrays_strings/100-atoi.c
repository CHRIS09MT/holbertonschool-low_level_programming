#include "main.h"

/**
 * _atoi - print the number with unsigned
 * @s: the pointer
 * Return: always 0
 */

int _atoi(char *s)
{
	unsigned int i = 0, isPositive = 1, retVal = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 43)
			isPositive *= 1;
		else if (s[i] == 45)
			isPositive *= -1;
		else
		{
			while (s[i] >= 48 && s[i] <= 57 && s[i] != '\0')
			{
				retVal = (retVal * 10) + (s[i] - '0');
				i++;
				if (!(s[i] >= 48 && s[i] <= 57 && s[i] != '\0'))
				{
					if (isPositive == 1)
						return (retVal);
					return (-retVal);
				}
			}
		}
		i++;
	}
	if (isPositive == 1)
		return (retVal);
	return (-retVal);
}

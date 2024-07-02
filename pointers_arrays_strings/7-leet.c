#include "main.h"

/**
  * leet - Encodes a string to 1337
  * @str: the string to be encoded
  * Return: a pointer to the encoded string
  */

char *leet(char *str)
{

	int count1 = 0, count2 = 0;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[count1])
	{
		for (count2 = 0; count2 <= 7; count2++)
		{
			if (str[count1] == leet[count2] ||
					str[count1] - 32 == leet[count2])
				str[count1] = count2 + '0';
		}
		count1++;
	}

	return (str);
}

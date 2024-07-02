#include "main.h"
/**
  *_memcpy - function that copies memory area
  *
  *@dest: destination to which the bytes will be copied
  *@src: memory area
  *@n: number bytes to copy
  *
  *Return: returns a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)

		dest[i] = src[i];

	return (dest);
}

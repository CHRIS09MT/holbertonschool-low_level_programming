#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - print the numbers of elements in a list
* @h: head of the list
* Return: number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
h = h->next;
count++;
	}
	return (count);
}

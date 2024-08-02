#include "lists.h"

/**
* dlistint_len - return the amount of elements in the list
* @h: head of the doubly linked list
* Return: the amount of elements in the list, or 0 if the list is empty
 */

size_t dlistint_len(const dlistint_t *h)
{	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

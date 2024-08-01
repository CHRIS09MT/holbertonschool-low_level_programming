#include "lists.h"

/**
* list_len - print the length of the list
* @h: head of the list
* Return: length of the list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *nods = h;

	while (nods != NULL)
	{
		len++;
		nods = nods->next;
	}
	return (len);
}

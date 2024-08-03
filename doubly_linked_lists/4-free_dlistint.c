#include "lists.h"
#include <stdlib.h>

/**
* free_list - free a list
* @head: pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

#include "lists.h"
#include <stdlib.h>

/**
* free_list - free a list
* @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

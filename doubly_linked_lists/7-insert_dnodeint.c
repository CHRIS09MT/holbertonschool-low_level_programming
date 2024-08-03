#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - insert a node in the list at index
* @h: double pointer to head of the list
* @idx: index of the list where the new node should be added
* @n: integer to be inserted
* Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = NULL, *counter = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node) /** Por si falla la asignación de memoria */
		return (NULL);

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	counter = *h;
	for (; counter != NULL && i < idx - 1; i++)
		counter = counter->next;

	if (counter == NULL) /** Si no se encuentra, se devuelve NULL */
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = counter->next;
	new_node->prev = counter;

	if (counter->next != NULL)
		counter->next->prev = new_node;
	counter->next = new_node;

	return (new_node);
}

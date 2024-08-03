#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - add a node to the end of list
* @head: double pointer to head of the list
* @n: integer to be added to the list
* Return: the address of the new node, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end = NULL;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
		*head = new_node; /** actualiza el puntero al principio de la lista */
	else
	{
		end = *head;

		while (end->next)
			end = end->next;

		end->next = new_node;
		new_node->prev = end;
	}

	return (new_node);
}

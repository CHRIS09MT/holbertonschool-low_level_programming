#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - add a node in the head of the list
* @head: double pointer to the head of the list
* @n: integer to be added to the list
* Return: pointer to the new node or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->next = NULL;

	if (*head != NULL)
		new_node->next = *head;

	*head = new_node;
	new_node->n = n;

	return (new_node);
}

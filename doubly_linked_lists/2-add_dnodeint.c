#include "lists.h"
#include <stdlib.h>
#include <string.h>

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

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}

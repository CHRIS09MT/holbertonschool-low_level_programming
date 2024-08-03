#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - delete a node specified by index
* @head: double pointer to head of the list
* @index: index of the node to delete
* Return: 1 on success, -1 if the node does not exist
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	for (; current != NULL && i < index; i++)
		current = current->next;
	if (current == NULL)
		return (-1);

	if (current->prev)/**Se conecta el nodo anterior con el siguiente*/
		current->prev->next = current->next;

	if (current->next) /**Se conecta el nodo siguiente con el anterior*/
		current->next->prev = current->prev;

	if (current == *head)/** Si el nodo es el primero, se actualiza la cabeza*/
		*head = current->next;

	free(current);
	return (1);
}

#include "lists.h"
#include <stdlib.h>

/**
* get_dnodeint_at_index - get a node int at index
* @head: pointer to the head of the dlistint_t list
* @index: index of the node to get
* Return: the node at index, or NULL if the index is out of range
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *counter = head;
	unsigned int i = 0;
 /** Recorre la lista hasta llegar al índice solicitado o al final */
	while (counter != NULL)
	{
		if (i == index)	/**Se retorna el nodo en la posición index(5)*/
			return (counter);
		{
			counter = counter->next; /** Se litera hasta llehar al index */
			i++;
		}
	}

	return (NULL); /** Si no se encuentra index, se retornal NULL */
}

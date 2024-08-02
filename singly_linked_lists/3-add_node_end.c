#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/**
* add_node_end - add a node to the end of the list
* @head: pointer to the head of the list
* @str: string to be added to the list
* Return: pointer to the newly added node or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end = NULL;
	list_t *new_node = NULL;
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head != NULL)
		*head = new_node;
	else
	{
		end = *head;

		while (end->next!= NULL)
			end = end->next;

		end->next = new_node;
	}
	return (new_node);
}

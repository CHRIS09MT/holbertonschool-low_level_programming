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
	list_t *end = *head;
	list_t *new_node = malloc(sizeof(list_t));
	int lenght = 0;

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
return (NULL);
	}
	while (str[lenght++])
		;

	new_node->len = lenght - 1;

	if (!end)
	{
		*head = new_node;
		end = *head;
	}
	else
	{
		while (end->next)
			end = end->next;
	}

	end->next = new_node;
	new_node->next = NULL;

	return (new_node);
}

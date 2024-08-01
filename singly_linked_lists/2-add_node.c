#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - add a node to start of list
* @head: pointer to the head of the list
* @str: string to be added to the list
* Return: return the length of the string
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int length = 0;

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	while (str[length++] != '\0')
		;
	new_node->len = length - 1;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

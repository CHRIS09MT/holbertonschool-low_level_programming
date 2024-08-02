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
	list_t *new_node = NULL;
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str); /** se duplica la string a guardar */
	new_node->len = strlen(str); /** mide la string guardada */
	new_node->next = NULL; /** crea un nodo */

	if (*head != NULL)
		new_node->next = *head; /** añade el nuevo nodo al principio de la lista */

	*head = new_node; /** actualiza el puntero al principio de la lista */
	return (new_node);
}

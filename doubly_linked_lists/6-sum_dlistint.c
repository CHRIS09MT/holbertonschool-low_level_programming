#include "lists.h"
#include <stdlib.h>

/**
* sum_dlistint - sum all nodes the a list
* @head: pointer to the head of the list
* Return: the sum of all nodes or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sum = head;
	int result = 0;

	if (head != NULL)
	{
		while (sum != NULL)
		{
			result += sum->n;
                        sum = sum->next;
		}
	}
	else
		return (0);

	return (result);
}
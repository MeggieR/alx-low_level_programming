#include "lists.h"
#include <stdlib.h>
void free_listint2(listint_t **head)
{
	listint_t *node_temp;

	if (head == NULL)
		return;
	while (*head)
	{
		node_temp = (*head)->next;
		free(*head);
		*head = node_temp;
	}
	*head = NULL;
}

#include <stdlib.h>
#include "lists.h"
/**
*free_listint2 - free list and set head to NULL
*@head: head pointer
**/
void free_listint2(listint_t **head)
{
	listint_t *node_temp;

	while (*head != NULL)
	{
		node_temp = *head;
		*head = (*head)->next;
		free(node_temp);
	}
	*head = NULL;
}
